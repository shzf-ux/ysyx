BUILD_DIR  := ./build
OBJ_DIR    := $(BUILD_DIR)/obj_dir
VSRC_DIR   := vsrc
CSRC_DIR   := csrc
TARGET     := VysyxSoCFull  # 目标名称（Verilator生成，V+顶层模块名）
TOP_MODULE := ysyxSoCFull   # 顶层模块名

# 添加包含路径（保持不变）
INCLUDE_DIR := $(abspath ./include)
VSRC_INCLUDE := $(abspath $(VSRC_DIR)/include)
PERIP_UART_INCLUDE := $(abspath ../ysyxSoC/perip/uart16550/rtl)
PERIP_SPI_INCLUDE := $(abspath ../ysyxSoC/perip/spi/rtl)

# --- 递归查找所有 Verilog 文件（.v/.vh）---
# 1. 主源码目录（递归所有子目录）
SOURCES := $(abspath $(shell find $(VSRC_DIR) -type f \( -name "*.v" -o -name "*.vh" \)))
# 2. 外设目录（递归所有子目录）
SOURCES += $(abspath $(shell find ../ysyxSoC/perip -type f -name "*.v"))
# 3. 显式添加顶层模块（单文件无需递归）
SOURCES += $(abspath ../ysyxSoC/build/ysyxSoCFull.v)

# --- 递归查找所有测试平台文件（.c/.cpp）---
# 1. 直接子目录文件（兼容原逻辑）
TESTBENCH := $(abspath $(shell find $(CSRC_DIR) -maxdepth 1 -type f \( -name "*.cpp" -o -name "*.c" \)))
# 2. 递归查找二级及以上子目录文件
TESTBENCH += $(abspath $(shell find $(CSRC_DIR) -mindepth 2 -type f \( -name "*.cpp" -o -name "*.c" \)))

# --- 动态库查找（递归所有子目录）---
NEMU_LIB_NAME := $(abspath $(shell find $(NEMU_HOME)/build -type f -name "riscv32-nemu-interpreter-so"))

VERILATOR      := verilator
# Verilator编译选项
#强制仿真程序实时刷新输出，无需等待换行符。-unbuffered
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
IMG :=  # 仿真镜像路径（可在运行时指定）

# 创建输出目录
$(shell mkdir -p $(BUILD_DIR))
$(shell mkdir -p $(OBJ_DIR))

# 默认目标：编译并运行
all: compile run

# 编译规则：调用Verilator处理Verilog和C源文件
compile:
	@$(VERILATOR) $(VERILATOR_FLAGS) $(SOURCES) $(TESTBENCH)

# 查看波形
wave:
	@gtkwave waveform.vcd &



run: compile
	@$(OBJ_DIR)/$(TARGET) $(ARGS) $(IMG)



clean:
	rm -rf $(BUILD_DIR)

# 配置菜单（Kconfig相关，保持不变）
CONF   := $(NPC_HOME)/$(CSRC_DIR)/tools/Kconfig/conf
MCONF  := $(NPC_HOME)/$(CSRC_DIR)/tools/Kconfig/mconf
menuconfig: Kconfig $(CONF)
	@$(MCONF) Kconfig
	@$(CONF) -s --syncconfig Kconfig

.PHONY: all compile run clean wave menuconfig
-include ../Makefile