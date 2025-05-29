BUILD_DIR  := ./build
OBJ_DIR    := $(BUILD_DIR)/obj_dir
VSRC_DIR   := vsrc
CSRC_DIR   := csrc
TARGET     := Vysyx_25030085_top
TOP_MODULE := ysyx_25030085_top



SOURCES    := $(abspath $(wildcard $(VSRC_DIR)/*.v))
TESTBENCH := $(abspath $(wildcard $(CSRC_DIR)/*.cpp $(CSRC_DIR)/*.c $(CSRC_DIR)/*.))
TESTBENCH += $(abspath $(wildcard $(CSRC_DIR)/*/*.cpp $(CSRC_DIR)/*/*.c ))

#动态库

NEMU_LIB_NAME := $(abspath$(wildcard $(NEMU_HOME)/build/riscv32-nemu-interpreter-so))


VERILATOR      := verilator
VERILATOR_FLAGS +=-cc --exe --build --trace \
                  --timescale 1ns/1ps\
                    -Wno-UNUSED \
                   --x-assign fast --x-initial fast \
                   --assert -Mdir $(OBJ_DIR) \
                   --top-module $(TOP_MODULE)			   

NEMU_LIB_NAME := /home/zzy/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
NPCFLAGS+=-d $(NEMU_LIB_NAME)
ARGS +=$(NPCFLAGS)
IMG :=
$(shell mkdir -p $(BUILD_DIR))
$(shell mkdir -p $(OBJ_DIR))

# 默认目标
all: compile run

# 编译规则
compile:
	@echo "Sources: $(SOURCES)"
	@echo "Testbench: $(TESTBENCH)"
	$(VERILATOR) $(VERILATOR_FLAGS) $(SOURCES) $(TESTBENCH)

# 运行仿真
run: compile
	@echo $(OBJ_DIR)/$(TARGET) $(ARGS) $(IMG)

# 清理
clean:
	rm -rf $(BUILD_DIR)

CONF   := $(NPC_HOME)/$(CSRC_DIR)/tools/Kconfig/conf
MCONF  := $(NPC_HOME)/$(CSRC_DIR)/tools/Kconfig/mconf
menuconfig:Kconfig $(CONF)
	@$(MCONF) Kconfig
	@$(CONF) -s --syncconfig Kconfig

.PHONY: all compile run clean
-include ../Makefile
