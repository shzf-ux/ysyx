#!/bin/bash
set -e

# 编译程序
make ex17

# 创建数据库
./ex17 db.dat c

# 设置数据
./ex17 db.dat s 1 zed zed@zedshaw.com
./ex17 db.dat s 2 frank frank@zedshaw.com
./ex17 db.dat s 3 joe joe@zedshaw.com
echo "查找zed"
./ex17 db.dat f zed

# 列出数据
./ex17 db.dat l

# 删除数据
./ex17 db.dat d 3

# 再次列出数据
./ex17 db.dat l

# 获取数据
./ex17 db.dat g 2

# 使用valgrind检查内存泄漏
valgrind --leak-check=yes./ex17 db.dat g 2
