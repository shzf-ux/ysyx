/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#define FLASH_SIZE 0x1000000 // 16MB Flash
#define SRAM_SIZE 0x2000 // 8KB SRAM
#define IS_FLASH(addr) (addr >= 0x30000000 && addr < 0x30000000 + FLASH_SIZE)
#define IS_SRAM(addr) (addr >= 0x0f000000 && addr < 0x0f000000 + SRAM_SIZE)


void display_memory_write(uint32_t addr, uint32_t data);

#if   defined(CONFIG_PMEM_MALLOC)
    static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
    static uint8_t flash[CONFIG_MSIZE] PG_ALIGN = {};//rom,程序加载的地方
    static uint8_t sram[CONFIG_MSIZE] PG_ALIGN = {}; // rom,程序加载的地方
#endif


uint8_t *guest_to_host(paddr_t paddr)
{
  if (IS_FLASH(paddr))
  {
    uint32_t offset = paddr - 0x30000000;
    return (offset < FLASH_SIZE) ? (flash + offset) : NULL;
  }
  else if (IS_SRAM(paddr))
  {
    uint32_t offset = paddr - 0x0f000000;
    return (offset < SRAM_SIZE) ? (sram + offset) : NULL;
  }

  return NULL;
}



paddr_t host_to_guest(uint8_t *haddr) { return haddr - flash + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
 
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of flash [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  flash = malloc(CONFIG_MSIZE);
  assert(flash);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(flash, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {

  //if (addr == 0xa0000048)return 0;
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
 // if (addr == 0xa00003f8) return ;
#ifdef CONFIG_MTRACE
  display_memory_write(addr, data);
#endif
  if (likely(in_pmem(addr)))
  {
    pmem_write(addr, len, data);
    return;
  }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
