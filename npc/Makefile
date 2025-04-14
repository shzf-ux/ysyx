# 关键配置
BUILD_DIR  := ./build
OBJ_DIR    := $(BUILD_DIR)/obj_dir
VSRC_DIR   := vsrc
CSRC_DIR   := csrc
TARGET     := Vysyx_25030085_top
TOP_MODULE := ysyx_25030085_top


SOURCES    := $(abspath $(wildcard $(VSRC_DIR)/*.v))
TESTBENCH := $(abspath $(wildcard $(CSRC_DIR)/*.cpp $(CSRC_DIR)/*.c $(CSRC_DIR)/*.))


VERILATOR      := verilator
VERILATOR_FLAGS +=-cc --exe --build --trace \
                  --timescale 1ns/1ps\
                    -Wno-UNUSED \
                   --x-assign fast --x-initial fast \
                   --assert -Mdir $(OBJ_DIR) \
                   --top-module $(TOP_MODULE)			   
#CONFIG_OPTS := $(shell grep '^CONFIG_' .config | sed 's/=y/=1/; s/^/-D/')
#VERILATOR_FLAGS += "$(CONFIG_OPTS)"
#main的执行参数
ARGS :=
IMG :=
$(shell mkdir -p $(BUILD_DIR))
$(shell mkdir -p $(OBJ_DIR))

# 默认目标
all: compile run

# 编译规则
compile:
	@echo "Sources: $(SOURCES)"
	@echo "Testbench: $(TESTBENCH)"
	@$(VERILATOR) $(VERILATOR_FLAGS) $(SOURCES) $(TESTBENCH)

# 运行仿真
run: compile
	$(OBJ_DIR)/$(TARGET) $(ARGS)

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
