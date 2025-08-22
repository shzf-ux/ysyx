.section .text.bootloader
.global _start

_start:
  mv s0, zero
  la sp, _stack_top
  call fsbl
  call _trm_init
