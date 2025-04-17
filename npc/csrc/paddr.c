#include"common.h"
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
void display_memory_read(uint32_t addr, uint32_t data);
void display_memory_write(uint32_t addr, uint32_t data);
static inline uint32_t host_read(void *addr, int len);
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
        assert(0);
        return 0;
    }
}
uint8_t *guest_to_host(uint32_t paddr)
 {
    
    
     return pmem + paddr - CONFIG_MBASE;
 }
 uint32_t pmem_read(uint32_t addr, int len)
 {


     uint32_t ret = host_read(guest_to_host(addr), len);
     return ret;
 }
extern "C" uint32_t pmem_readv(int raddr)
{
    //printf("c  lw %08x\n", raddr);
    
    uint32_t ret = pmem_read(raddr, 4);
    //printf("ret:%08x\n", ret);
    display_memory_read(raddr, ret);
    return ret;
}
void init_mem()
{
    memset(pmem, rand(), CONFIG_MSIZE);
}
extern "C" void pmem_write( int waddr,int wdata,uint8_t wmask)
{
 

    // mask 00001111
    // 把32为的data按照wmask写入addr里面
    display_memory_write( waddr, wdata);
    uint8_t *p = guest_to_host(waddr); // 获取8字节的指针
    for (int i = 0; i < 4; i++)
    {
        if ((wmask >> i) & 1)//是1就写入
            p[i] = (wdata >> (i * 8)) & 0xFF;//111111111//保留相关位
    }
}
void display_memory_read(uint32_t addr, uint32_t data)
{
    printf(ANSI_FMT("read memory at pc: ", ANSI_FG_GREEN) "0x%08x, data: 0x%08x\n", addr, data);
}

void display_memory_write(uint32_t addr, uint32_t data)
{
    printf(ANSI_FMT("write memory at pc: ", ANSI_FG_YELLOW) "0x%08x, data: 0x%08x\n", addr,  data);
}