#include "common.h" //不能用<>
#include "difftest/dut.h"
void sdb_set_batch_mode();

extern int sim_time;
void init_disasm();
uint32_t pmem_read(uint32_t raddr,int len);
uint8_t *guest_to_host(uint32_t paddr);
void init_mem();
void parse_elf(char *elf_file); // 传入一个elf文件

static char *img_file = NULL;
static char *diff_so_file = NULL;
static int difftest_port = 1234;
#define Log(format, ...)                                    \
    _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", \
         __FILE__, __LINE__, __func__, ##__VA_ARGS__)



// 设置初始ji
static const uint32_t img[] = {
    0x00500093, // addi x1,x0,5
    0x00100113, // addi x2,x0,1
    0x00200113, // addi x2,x0,2
    0x00508113, // addi x2,x1,5
    0x00100073,};

void init_isa()
{
    /* Load built-in image. */
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
}

// 加载镜像文件

static long load_img()
{
    if (img_file == NULL)
    {
        printf("%sNo image is given. Use the default build-in image.%s\n", ANSI_FG_BLUE, ANSI_NONE);
        return 4096; // built-in image size
    }

    FILE *fp = fopen(img_file, "rb");
    if (fp == NULL)
    {
        printf("cannot open the file\n");
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);

    printf("%sThe image is %s, size = %ld %s\n", ANSI_FG_BLUE, img_file, size, ANSI_NONE);

    fseek(fp, 0, SEEK_SET);
    int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
    assert(ret == 1);

    fclose(fp);
    return size;
}
char *elf_file;
static int parse_args(int argc, char *argv[])
{
  

    const struct option table[] = {
     {"batch"    , no_argument      , NULL, 'b'},
    {"elf"      , required_argument, NULL, 'e'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
    };
    int o;
    while ((o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1)
    {
      
        switch (o)
        {
        case 'b':sdb_set_batch_mode();break; // 设置批处理模式
        case 'd': diff_so_file = optarg;printf("%s\n", diff_so_file);break;
        case 'e': elf_file = optarg;break;
        case 1:img_file = optarg;return 0;
        default:
            printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
            printf("\t-b,--batch              run with batch mode\n");
            printf("\t-l,--log=FILE           output log to FILE\n");
            printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
            printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
            printf("\t-e,--elf=FILE           parse the elf file\n");
            printf("\n");
            exit(0);
        }
    }
    return 0;
}
void welcome()
{
    printf("Welcome %sRISC-V%s NPC \n", ANSI_BG_RED, ANSI_NONE);
    printf("For help, type \"help\"\n");
}
void init_rtl(int argc, char *argv[])
{
   
    Verilated::commandArgs(argc, argv);


    // 启用波形跟踪
    Verilated::traceEverOn(true);
  
    top->trace(vcd, 5);
    vcd->open("waveform.vcd");

    // 1. 初始化信号
    top->clk = 0;
    top->rst = 0;
    top->eval();

    sim_time++;

    // 1.5 开始复位流程
    top->clk = 1;
    top->rst = 1;
    top->eval();
    top->instruction = pmem_read(top->pc_out,4);
    vcd->dump(sim_time); // 写入复位信号置位状态
    sim_time++;

    // 3. 释放复位信号
    top->rst = 0;
    top->clk = 0;
    top->instruction = pmem_read(top->pc_out,4);
    top->eval();
    vcd->dump(sim_time); // 写入复位释放状态
    sim_time++;
}
void init_monitor(int argc, char *argv[])
{
    welcome();
    parse_args(argc, argv); // 解析命令行参数
    parse_elf(elf_file); // 传入一个elf文件
    init_mem();

    init_isa();
    
    long img_size = load_img();
    
    init_disasm();
    init_rtl(argc, argv);
  
    init_difftest(diff_so_file, img_size, difftest_port);
    
}