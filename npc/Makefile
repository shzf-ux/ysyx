BUILD_DIR  := ./build
OBJ_DIR    := $(BUILD_DIR)/obj_dir
VSRC_DIR   := vsrc
CSRC_DIR   := csrc
TARGET     := VysyxSoCFull  # 目标名称（Verilator生成，V+顶层模块名）
TOP_MODULE := ysyxSoCFull   # 顶层模块名
SYN_TOP = ysyx_25030085

# 添加包含路径（保持不变）
INCLUDE_DIR := $(abspath ./include)
VSRC_INCLUDE := $(abspath $(VSRC_DIR)/include)
PERIP_UART_INCLUDE := $(abspath ../ysyxSoC/perip/uart16550/rtl)
PERIP_SPI_INCLUDE := $(abspath ../ysyxSoC/perip/spi/rtl)


SOURCES := $(abspath $(shell find $(VSRC_DIR) -type f \( -name "*.v" -o -name "*.vh" \)))
# 2. 外设目录（递归所有子目录）
SOURCES += $(abspath $(shell find ../ysyxSoC/perip -type f -name "*.v"))
# 3. 显式添加顶层模块（单文件无需递归）
SOURCES += $(abspath ../ysyxSoC/ready-to-run/D-stage/ysyxSoCFull.v)

# --- 递归查找所有测试平台文件（.c/.cpp）---
# 1. 直接子目录文件（兼容原逻辑）
TESTBENCH := $(abspath $(shell find $(CSRC_DIR) -maxdepth 1 -type f \( -name "*.cpp" -o -name "*.c" \)))
# 2. 递归查找二级及以上子目录文件
TESTBENCH += $(abspath $(shell find $(CSRC_DIR) -mindepth 2 -type f \( -name "*.cpp" -o -name "*.c" \)))

# --- 动态库查找（递归所有子目录）---
NEMU_LIB_NAME := $(abspath $(shell find $(NEMU_HOME)/build -type f -name "riscv32-nemu-interpreter-so"))

VERILATOR      := verilator

VERILATOR_FLAGS += --cc --exe --build --trace \
                  --timescale 1ns/1ns --no-timing \
                  -Wno-UNUSED \
                  -autoflush\
                  --x-assign fast --x-initial fast \
                  --assert -Mdir $(OBJ_DIR) \
                  --top-module $(TOP_MODULE) \
                  -I$(VSRC_DIR) \
                  -I$(INCLUDE_DIR) \
                  -I$(VSRC_INCLUDE) \
                  -I$(PERIP_UART_INCLUDE) \
                  -I$(PERIP_SPI_INCLUDE)

# NEMU库路径（固定路径，确保正确）
NEMU_LIB_NAME := /home/zzy/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
NPCFLAGS += -d $(NEMU_LIB_NAME) 
ARGS += $(NPCFLAGS)
ARGS +=/home/zzy/ysyx-workbench/ysyxSoC/ready-to-run/D-stage/new.bin
IMG :=  # 仿真镜像路径（可在运行时指定）

# 创建输出目录
$(shell mkdir -p $(BUILD_DIR))
$(shell mkdir -p $(OBJ_DIR))

# 默认目标：编译并运行
all: compile run

# 编译规则：调用Verilator处理Verilog和C源文件
compile:
	$(VERILATOR) $(VERILATOR_FLAGS) $(SOURCES) $(TESTBENCH)

# 查看波形
wave:
	@gtkwave waveform.vcd &


ALL:=dummy
mainargs:=
run: compile
	rm -f $(NPC_HOME)/../ysyxSoC/ready-to-run/D-stage/new.bin
ifeq ($(ALL), hello)
	cd ../am-kernels/kernels/hello && make ARCH=minirv-npc ALL=$(ALL)
	cd $(NPC_HOME)/../ysyxSoC/ready-to-run/D-stage &&  bash gen.sh $(NPC_HOME)/../am-kernels/kernels/hello/build/$(ALL)-minirv-npc.elf
else ifeq ($(ALL), clock)
	cd ../am-kernels/tests/am-tests && make ARCH=minirv-npc ALL=$(ALL) mainargs=$(mainargs)
	cd $(NPC_HOME)/../ysyxSoC/ready-to-run/D-stage &&  bash gen.sh $(NPC_HOME)/../am-kernels/tests/am-tests/build/amtest-minirv-npc.elf
else
	cd ../am-kernels/tests/cpu-tests && make ARCH=minirv-npc ALL=$(ALL)
	cd $(NPC_HOME)/../ysyxSoC/ready-to-run/D-stage &&  bash gen.sh $(NPC_HOME)/../am-kernels/tests/cpu-tests/build/$(ALL)-minirv-npc.elf
endif
	@echo $(OBJ_DIR)/$(TARGET) $(ARGS) $(IMG)
	$(OBJ_DIR)/$(TARGET) $(ARGS) $(IMG)




syn: VERILOG_FLAGS += -DSYNTHESIS
syn:
	@echo "Synthesis NPC"
	@cd $(NPC_HOME)/../yosys-sta && make sta DESIGN=$(SYN_TOP) \
	SDC_FILE=$(NPC_HOME)/top.sdc		\
	RTL_FILES="$(shell find $(NPC_HOME)/vsrc -name "*.v")" \
	INCLUDE_PATH=$(NPC_HOME)/vsrc/include
	@cd $(NPC_HOME)



clean:
	@rm -rf $(BUILD_DIR)
	@rm -rf ../abstract-machine/build
	@rm -rf ../am-kernels/tests/cpu-tests/build
	@rm -rf ../am-kernels/tests/am-tests/build

# 配置菜单（Kconfig相关，保持不变）
CONF   := $(NPC_HOME)/$(CSRC_DIR)/tools/Kconfig/conf
MCONF  := $(NPC_HOME)/$(CSRC_DIR)/tools/Kconfig/mconf
menuconfig: Kconfig $(CONF)
	@$(MCONF) Kconfig
	@$(CONF) -s --syncconfig Kconfig

.PHONY: all compile run clean wave menuconfig
-include ../Makefile