#include "common.h"
#include "paddr.h"


// 物理内存和闪存定义
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
static uint8_t flash[FLASH_SIZE ] PG_ALIGN = {};

// 主机端内存读取辅助函数
static inline uint32_t host_read(void *addr, int len)
{
    switch (len)
    {
    case 1:
        return *(uint8_t *)addr;
    case 2:
        return *(uint16_t *)addr;
    case 4:
        return *(uint32_t *)addr;
    default:
        assert(0 && "Invalid read length");
        return 0;
    }
}



// 客户机地址到主机地址的转换
uint8_t *guest_to_host(uint32_t paddr)
{
   // printf("%08x\n", paddr);

    return flash + paddr - CONFIG_MBASE;
}

// 物理内存读取函数
uint32_t pmem_read(uint32_t addr, int len)
{
    // 新增长度合法性检查
    assert((len == 1 || len == 2 || len == 4) && "Invalid read length");
    // 新增地址对齐检查
    assert((addr & (len - 1)) == 0 && "Unaligned address for read");

    return host_read(guest_to_host(addr), len);
}

// 带跟踪的物理内存读取
extern "C" uint32_t pmem_readv(int raddr)
{
    uint32_t ret = pmem_read(raddr, 4);

#ifdef CONFIG_MTRACE
    display_memory_read(raddr, ret);
#endif
    return ret;
}


void init_mem()
{

    memset(flash, rand(), CONFIG_MSIZE);
}

// 物理内存写入函数（修复并启用写入逻辑）
extern "C" void pmem_write(int waddr, int wdata, uint8_t wmask)
{
    if (waddr == SERIAL_ADDR)
    {
        putc(wdata, stdout); // 启用串口输出功能
        fflush(stdout);      // 确保立即刷新输出缓冲区
        return;
    }

#ifdef CONFIG_MTRACE
    display_memory_write(waddr, wdata);
#endif

}

// 内存读取显示函数
void display_memory_read(uint32_t addr, uint32_t data)
{
    // 修正输出信息，原"pc"表述不准确，改为"address"
    printf(ANSI_FMT("read memory at address: ", ANSI_FG_GREEN) "0x%08x, data: 0x%08x\n", addr, data);
}

// 内存写入显示函数
void display_memory_write(uint32_t addr, uint32_t data)
{
    // 修正输出信息，原"pc"表述不准确，改为"address"
    printf(ANSI_FMT("write memory at address: ", ANSI_FG_YELLOW) "0x%08x, data: 0x%08x\n", addr, data);
}


extern "C" void flash_read(int32_t addr, int32_t *data)
{
    

   //printf("[flash] addr:%08x\n", addr);

    uint32_t ret = host_read(&flash[addr], 4);
    *data = ret;
  // printf("[paddr flash read] addr:%08x, data:%08x\n", addr, ret);
}

// ROM读取函数
extern "C" void mrom_read(int32_t addr, int32_t *data)
{
    if (data == NULL)
    {
        printf("Error: mrom_read: data pointer is NULL\n");
        return;
    }

    int32_t val = pmem_read(addr, 4);
    *data = val;
}