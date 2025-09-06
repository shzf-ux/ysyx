

TOPNAME = ysyxSoCFull
NXDC_FILES = constr/top.nxdc
#nvboard搜索路径
INC_PATH ?=

BUILD_DIR  := ./build
OBJ_DIR    := $(BUILD_DIR)/obj_dir
TARGET     := VysyxSoCFull
SOC_HOME   := ../ysyxSoC
BIN := $(BUILD_DIR)/$(TARGET)

# 编译选项
VERILATOR = verilator
VERILATOR_FLAGS += -cc --exe
VERILATOR_FLAGS += --top-module $(TOPNAME)
VERILATOR_FLAGS += -x-assign fast --x-initial fast
VERILATOR_FLAGS += -Wno-UNUSED  -Wno-WIDTH
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += --assert
VERILATOR_FLAGS += --build -Mdir $(BUILD_DIR)
VERILATOR_FLAGS += --autoflush
VERILATOR_FLAGS += --timescale "1ns/1ns" --no-timing
VERILATOR_FLAGS += -MMD       

# 添加头文件搜索路径
VERILATOR_FLAGS += +incdir+$(NPC_HOME)/vsrc/include 
VERILATOR_FLAGS += +incdir+$(SOC_HOME)/perip/uart16550/rtl 
VERILATOR_FLAGS += +incdir+$(SOC_HOME)/perip/spi/rtl

# VSRCS收集命令
#cpu的v文件
VSRCS = $(shell find ./vsrc -name "*.v")
#soc的外设文件
VSRCS += $(shell find $(SOC_HOME)/perip -name "*.v")
#soc顶层文件
VSRCS += $(SOC_HOME)/build/ysyxSoCFull.v
#仿真文件
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
  
#nvboard文件
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
# 包含NVBoard规则
include $(NVBOARD_HOME)/scripts/nvboard.mk
CSRCS += $(SRC_AUTO_BIND)



# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""


# 命令行参数
NEMU_LIB_NAME := /home/zzy/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
NPCFLAGS += -d $(NEMU_LIB_NAME)
ARGS += $(NPCFLAGS)

# 默认目标
default: $(BIN)

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		$(addprefix -LDFLAGS , -L$(NVBOARD_HOME)/build) \
		$(addprefix -LDLIBS , $(LDLIBS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

IMG := 

# 创建输出目录
$(shell mkdir -p $(BUILD_DIR))
$(shell mkdir -p $(OBJ_DIR))

# 默认目标：编译并运行
all: default

# 查看波形
wave:
	@gtkwave waveform.vcd &

run: $(BIN)
	@echo "BIN: $(BIN)"
	@echo "args: $(ARGS)"
	@$(BIN) $(ARGS) $(IMG)

clean:
	rm -rf $(BUILD_DIR)

# 配置菜单
CONF   := $(NPC_HOME)/csrc/tools/Kconfig/conf
MCONF  := $(NPC_HOME)/csrc/tools/Kconfig/mconf

menuconfig: Kconfig $(CONF)
	@$(MCONF) Kconfig
	@$(CONF) -s --syncconfig Kconfig

.PHONY: all compile run clean wave menuconfig
-include ../Makefile