# 编译器设置
CC = gcc
CFLAGS = -Wall -Wextra -g -Isrc
LDFLAGS = -ldl

# 目录设置
SRC_DIR = src
BUILD_DIR = build
TESTS_DIR = tests
BIN_DIR = bin

# 源文件和目标文件
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC_FILES))

# 测试文件
TEST_SRC_FILES = $(wildcard $(TESTS_DIR)/*_tests.c)
TEST_BIN_FILES = $(patsubst $(TESTS_DIR)/%.c, $(BIN_DIR)/%, $(TEST_SRC_FILES))

# 库文件
STATIC_LIB = $(BUILD_DIR)/libex29.a
DYNAMIC_LIB = $(BUILD_DIR)/libex29.so

# 默认目标：构建库和测试
all: $(STATIC_LIB) $(DYNAMIC_LIB) tests

# 构建静态库
$(STATIC_LIB): $(OBJ_FILES)
	ar rcs $@ $^
	ranlib $@

# 构建动态库
$(DYNAMIC_LIB): $(OBJ_FILES)
	$(CC) -shared -o $@ $^

# 构建测试可执行文件
$(BIN_DIR)/%: $(TESTS_DIR)/%.c $(STATIC_LIB)
	$(CC) $(CFLAGS) -o $@ $< $(STATIC_LIB) $(LDFLAGS)

# 编译源文件为目标文件
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# 运行所有测试
tests: $(TEST_BIN_FILES)
	@echo "Running tests..."
	@for test in $(TEST_BIN_FILES); do \
		echo "===== Running $$test ====="; \
		$$test; \
	done

# 清理生成的文件
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

# 创建构建目录
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# 确保目录存在
$(OBJ_FILES): | $(BUILD_DIR)
$(TEST_BIN_FILES): | $(BIN_DIR)
