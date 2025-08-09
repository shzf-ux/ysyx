.section .text.entry
.global _start

_start:
  mv s0, zero
  la sp, _stack_top
  call _trm_init
