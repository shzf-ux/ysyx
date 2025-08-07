AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trm.c \
           riscv/ysyxsoc/ioe.c \
           riscv/ysyxsoc/timer.c \
           riscv/ysyxsoc/input.c \
           riscv/ysyxsoc/cte.c \
           riscv/ysyxsoc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections

LDFLAGS   += -T $(AM_HOME)/scripts/ysyxsoc-linker.ld
LDFLAGS   += --defsym=_stack_size=1K
LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
CFLAGS += -I$(AM_HOME)/am/src/riscv/ysyxsoc/include
NPCFLAGS += -d $(NEMU_LIB_NAME)   # DiffTest库
NPCFLAGS +=                # 批处理模式（无参数）
NPCFLAGS += -e $(IMAGE).elf        # ELF文件路径

NEMU_LIB_NAME := /home/zzy/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so


.PHONY: run

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: image
	@$(MAKE) -C $(NPC_HOME) ISA=$(ISA) run ARGS="$(NPCFLAGS)" IMG=$(IMAGE).bin