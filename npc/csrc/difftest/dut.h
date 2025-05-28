#ifndef _DUT_H_
#define _DUT_H_
void init_difftest(char *ref_so_file, long img_size, int port);
void difftest_step(uint32_t pc);

#endif