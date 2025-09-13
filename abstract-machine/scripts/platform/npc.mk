AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/linker.ld
LDFLAGS   += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
NPCFLAGS +=  -b -d $(NEMU_LIB_NAME)   # DiffTest库
NPCFLAGS += -e $(IMAGE).elf        # ELF文件路径
NEMU_LIB_NAME := /home/zzy/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
#$(abspath$(wildcard $(NEMU_HOME)/build/riscv32-nemu-interpreter-so))
#-b无需参数，直接传递文件即可

CFLAGS += -DMAINARGS=\"$(mainargs)\"

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = mario
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=\""$(MAINARGS_PLACEHOLDER)"\"


insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) $(MAINARGS_PLACEHOLDER) "$(mainargs)"

# 新增目标：处理gen.sh生成new.bin，依赖insert-arg确保mainargs已注入
process-bin: insert-arg
	@echo "Running gen.sh to generate new.bin..."
	# 执行gen.sh，输入为经过insert-arg处理的bin文件
	cd ~/ysyx-workbench/ysyxSoC/ready-to-run/D-stage && \
	bash gen.sh $(abspath $(IMAGE).elf)
	# 确认new.bin生成
	@if [ -f ~/ysyx-workbench/ysyxSoC/ready-to-run/D-stage/new.bin ]; then \
		echo "new.bin generated successfully"; \
	else \
		echo "Error: gen.sh failed to generate new.bin"; \
		exit 1; \
	fi

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

# 修改run目标，先执行process-bin生成new.bin，再运行模拟器（使用new.bin）
run: process-bin
	# 传递new.bin路径给NPC
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) run \
		ARGS="$(NPCFLAGS)" \
		IMG=~/ysyx-workbench/ysyxSoC/ready-to-run/D-stage/new.bin

.PHONY: insert-arg process-bin
