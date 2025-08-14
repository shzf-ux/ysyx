#ifndef PADDR_H
#define PADDR_H

#include <stdint.h>
#include <stddef.h>

#define FLASH_SIZE (8 * 1024)
#define FLASH_START 0x30000000
#define FLASH_END 0x3fffffff

#ifdef __cplusplus
extern "C"
{
#endif

    uint32_t pmem_readv(int raddr);

    void pmem_write(int waddr, int wdata, uint8_t wmask);

    void init_mem();

    void flash_read(int32_t addr, int32_t *data);

    void mrom_read(int32_t addr, int32_t *data);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

void display_memory_read(uint32_t addr, uint32_t data);

void display_memory_write(uint32_t addr, uint32_t data);

uint64_t get_time();

uint8_t *guest_to_host(uint32_t paddr);

uint32_t pmem_read(uint32_t addr, int len);

#endif

#endif