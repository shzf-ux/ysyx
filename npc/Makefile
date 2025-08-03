BUILD_DIR  := ./build
OBJ_DIR    := $(BUILD_DIR)/obj_dir
VSRC_DIR   := vsrc
CSRC_DIR   := csrc
TARGET     := Vysyx_25030085_top
TOP_MODULE := ysyx_25030085_top

# 添加包含路径
INCLUDE_DIR := $(abspath ./include)
VSRC_INCLUDE := $(abspath $(VSRC_DIR)/include)

SOURCES    := $(abspath $(wildcard $(VSRC_DIR)/*.v $(VSRC_DIR)/*.vh))
TESTBENCH := $(abspath $(wildcard $(CSRC_DIR)/*.cpp $(CSRC_DIR)/*.c $(CSRC_DIR)/*.))
TESTBENCH += $(abspath $(wildcard $(CSRC_DIR)/*/*.cpp $(CSRC_DIR)/*/*.c))

# 动态库
NEMU_LIB_NAME := $(abspath $(wildcard $(NEMU_HOME)/build/riscv32-nemu-interpreter-so))

VERILATOR      := verilator
VERILATOR_FLAGS += --cc --exe --build --trace \
                  --timescale 1ns/1ps \
                  -Wno-UNUSED \
                  --x-assign fast --x-initial fast \
                  --assert -Mdir $(OBJ_DIR) \
                  --top-module $(TOP_MODULE) \
                  -I$(VSRC_DIR) \
                  -I$(INCLUDE_DIR) \
                  -I$(VSRC_INCLUDE)

NEMU_LIB_NAME := /home/zzy/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
NPCFLAGS += -d $(NEMU_LIB_NAME)
ARGS += $(NPCFLAGS)
IMG :=

$(shell mkdir -p $(BUILD_DIR))
$(shell mkdir -p $(OBJ_DIR))

# 默认目标
all: compile run

# 编译规则
compile:
	@$(VERILATOR) $(VERILATOR_FLAGS) $(SOURCES) $(TESTBENCH)

wave:
	@gtkwave waveform.vcd &

# 运行仿真
run: compile
	@$(OBJ_DIR)/$(TARGET) $(ARGS) $(IMG)

# 清理
clean:
	rm -rf $(BUILD_DIR)

CONF   := $(NPC_HOME)/$(CSRC_DIR)/tools/Kconfig/conf
MCONF  := $(NPC_HOME)/$(CSRC_DIR)/tools/Kconfig/mconf
menuconfig: Kconfig $(CONF)
	@$(MCONF) Kconfig
	@$(CONF) -s --syncconfig Kconfig

.PHONY: all compile run clean wave menuconfig
-include ../Makefile