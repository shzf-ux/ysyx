#include"common.h"
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
void display_memory_read(uint32_t addr, uint32_t data);
void display_memory_write(uint32_t addr, uint32_t data);

extern "C" void pmem_write(int waddr, int wdata, uint8_t wmask);
uint64_t get_time();
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
    if (raddr == UPTIME_ADDR)
    {

        return get_time();
    }
    uint32_t ret = pmem_read(raddr, 4);

    //printf("ret:%08x\n", ret);
    #ifdef CONFIG_MTRACE
    display_memory_read(raddr, ret);
    #endif
    return ret;
}

void init_mem()
{
    memset(pmem, rand(), CONFIG_MSIZE);
}
extern "C" void pmem_write( int waddr,int wdata,uint8_t wmask)
{
    if (waddr == SERIAL_ADDR)
    {
       // fflush(stdout);
        //printf("%d", wmask);
        //putc(wdata, stdout);
        // putc(wdata, stdout);
        //fflush(stdout); // 确保立即刷新输出缓冲区,可以使msh显示出来

        return;
    }

//0001  0011  1111
//0010  1100
//0100         
//1000
    // 把32为的data按照wmask写入addr里面
#ifdef CONFIG_MTRACE
    display_memory_write(waddr, wdata);
#endif

uint8_t *p = guest_to_host(waddr); // 获取8字节的指针
//p表示对齐后的地址的地位，00 01 02 03分别表示 p0 p1 p2 p3
if (wmask == 0x01 || wmask == 0x02 || wmask == 0x04 || wmask == 0x08)
{

    for (int i = 0; i < 4; i++)
    {
        if ((wmask >> i) & 1)    // 是1就写入
            p[i] = wdata & 0xFF; // 111111111//保留相关位
    }
}
//01表示写入地址低8位的数据的低8位
else if (wmask == 0x03 || wmask == 0x0c)
{
    if (wmask == 0x03)
    {
        p[0] = wdata & 0xFF;        // 低字节（bit7-0）
        p[1] = (wdata >> 8) & 0xFF; // 高字节（bit15-8）
    }
    else if (wmask == 0x0c)
    {
        p[2] = wdata & 0xFF;        // 低字节（bit7-0）
        p[3] = (wdata >> 8) & 0xFF; // 高字节（bit15-8）
    }
}
//0c  表示对齐后的值地位不写入，高16位写入数据的低16位
//03表示 对齐后低位写入数据的低16位，高位不写入
else if (wmask == 0xf)
{

    // 是1就写入
    p[0] = wdata >> 0;  // 111111111//保留相关位
    p[1] = wdata >> 8;  // 111111111//保留相关位
    p[2] = wdata >> 16; // 111111111//保留相关位
    p[3] = wdata >> 24; // 111111111//保留相关位
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







extern "C" void flash_read(int32_t addr, int32_t *data)
{

    assert(0);
}
extern "C" void mrom_read(int32_t addr, int32_t *data)
{
    if (data == NULL)
    {
        printf("Error: mrom_read: data pointer is NULL\n");
        return;
    }
   
   // printf("addr:%08x\n", addr);
    int32_t val = pmem_read(addr, 4);
    *data = val;
   // printf("data:%08x\n", val);
}