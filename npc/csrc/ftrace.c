#include "common.h"
#include <elf.h>
#ifdef CONFIG_FTRACE
typedef struct
{
    char name[64];
    uint32_t addr;
    Elf32_Xword size;
} Symbol;

//最后里面存着a函数的名字，大小

Symbol *symbol = NULL;
int func_num = 0;

void parse_elf(char* elf_file)//传入一个elf文件
{
   
    if(elf_file==NULL)
    {
        assert(0);
        return;
    }
  
    FILE *fp;
    fp = fopen(elf_file, "rb");//打开文件以只读二进制形式
    if(fp==NULL)
    {
        printf("cannot open the elf file\n");
        assert(0);
    }

    //成功打开文件edhr
    Elf32_Ehdr edhr;//创建一个文件头结构体,用来储存
    //读取文件头,freadan返回值为数据项的个数
    if(fread(&edhr,sizeof(edhr),1,fp)<1)
    {
        printf("cannot read the edhr\n");
        assert(0);
    }

    //读取成功,检查magic num
    if (edhr.e_ident[0] != 0x7f || edhr.e_ident[1] != 'E' ||
        edhr.e_ident[2] != 'L' || edhr.e_ident[3] != 'F')
    {
        printf("The opened file isn't a elf file!\n");
        exit(0);
    }
    fseek(fp, edhr.e_shoff, SEEK_SET);
    //跳转节头表




    Elf32_Shdr shdr;//创建节头表结构体
    //创建字符串表
    char *str_tab=NULL;//初始化NULL,否则free会报错
    for (int i = 0; i < edhr.e_shnum; i++)
    //遍历所有节头表，找到sym和strtab
    {
        //循环读取所有节头表
        if(fread(&shdr,sizeof(shdr),1,fp)<1)
        {
            assert(0);
        }
        if(shdr.sh_type==SHT_STRTAB)//找到字符串表
        {
            str_tab =(char*) malloc(shdr.sh_size);
            //分配内存

            fseek(fp, shdr.sh_offset, SEEK_SET);
            if (fread(str_tab, shdr.sh_size, 1, fp) <= 0)
            {//把字符串表的内容读到该结构体里面
                printf("fail to read the strtab\n");
                exit(0);
            }
        }
    }
//找到符号表里面的索引对应字符串表
    fseek(fp, edhr.e_shoff, SEEK_SET);
    Elf32_Sym sym;

  
      //  再次寻找
    for (int i = 0; i < edhr.e_shnum; i++)
    {
        // 循环读取所有节头表
        if (fread(&shdr, sizeof(shdr), 1, fp) < 1)
        {
            assert(0);
        }
        if (shdr.sh_type == SHT_SYMTAB)//找到符号表
        {
            fseek(fp, shdr.sh_offset, SEEK_SET);//跳转符号表
            int sym_count = shdr.sh_size / shdr.sh_entsize;
            //符号个数
            symbol = (Symbol*) malloc(sizeof(Symbol) * sym_count);
            // 为结构体e分配内存
            for (size_t j = 0; j < sym_count; j++)
            {
                if (fread(&sym, sizeof(Elf32_Sym), 1, fp) <= 0)//读取所有符号
                {
                    printf("fail to read the symtab\n");
                    exit(0);
                }

                if ((sym.st_info&0x0F)== STT_FUNC)//取低四位找到符号类型为func
                {
                    
                    char *name = str_tab + sym.st_name; // 通过索引值找到
                    strncpy(symbol[func_num].name, name, sizeof(symbol[func_num].name) - 1);
                    symbol[func_num].addr = sym.st_value;
                    symbol[func_num].size = sym.st_size; // 对于函数符号，若是能确定代码长度，也可用它表示函数代码的大小
                    func_num++;
                }
            }
        }
    }
    fclose(fp);
   free(str_tab);
}





int rec_depth = 1;//设置调用h深度
int flag = 0;
// 调用函数
void printf_symbol_tab()
{

    if (flag == 0 && rec_depth == 1)
    {
        printf("| %-20s | %-15s | %-10s |\n", "Function Name", "Function Address", "Function Size");
        printf("|---------------------|-----------------|------------|\n");

        for (int i = 0; i < func_num; i++)
        {
            // 打印表格内容
            printf("| %-20s | 0x%08x      | %-10lu |\n", symbol[i].name, symbol[i].addr, symbol[i].size);
        }
        printf("|---------------------|-----------------|------------|\n");
        
    }
}
extern "C" void display_call_func(uint32_t pc, uint32_t target)
//起始地址和目标地址
{
    printf_symbol_tab();
    flag = 1;
    int i = 0;
    for (i = 0; i < func_num; i++)
    {
        if (target ==symbol[i].addr)//里面存着被调用函数的名字和地址，找到目标函数的索引
            break;
    }
    printf("pc: 0x%08x:", pc);//打印调用时起始地址

    for (int k = 0; k < rec_depth; k++)
    {
        printf("  ");
    }
    rec_depth++;
    printf("call  %s target:0x%08x\n", symbol[i].name, target);//打印调用函数和目标地址
}

extern "C" void display_ret_func(uint32_t pc, uint32_t target) // 当前地址，返回地址
{
    flag = 1;
    int i = 0;
    for (i=0; i < func_num; i++)
    {
        if (pc >= symbol[i].addr && pc < (symbol[i].addr + symbol[i].size))
            break;
        
    }
    printf("pc: 0x%08x:", pc);

    rec_depth--;

    for (int k = 0; k < rec_depth; k++)
        printf("  ");

    printf("ret  [%s] return address:0x%08x\n", symbol[i].name,target);
}
#else
void parse_elf(char *elf_file){}
extern "C" void display_ret_func(uint32_t pc, uint32_t target){}

extern "C" void display_call_func(uint32_t pc, uint32_t target){}
void printf_symbol_tab(){}
#endif