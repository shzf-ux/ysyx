#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...)
{
  char sprint_buf[1024];
  va_list arg;
  va_start(arg, fmt);
  int len = vsprintf(sprint_buf, fmt, arg);
  va_end(arg);
  putstr(sprint_buf);
  return len;
}

static void num_to_str(char *buf, int *index, int num, int width, char pad)
{
  char temp[32];
  int i = 0;
  int is_negative = 0;

  if (num < 0)
  {
    is_negative = 1;
    num = -num;
  }

  // 处理0的特殊情况
  if (num == 0)
  {
    temp[i++] = '0';
  }
  else
  {
    while (num > 0)
    {
      temp[i++] = '0' + (num % 10);
      num /= 10;
    }
  }

  // 计算需要的填充字符数
  int total_digits = i + (is_negative ? 1 : 0);
  int padding = width > total_digits ? width - total_digits : 0;

  // 添加填充字符
  while (padding-- > 0)
  {
    buf[(*index)++] = pad;
  }

  // 添加负号
  if (is_negative)
  {
    buf[(*index)++] = '-';
  }

  // 添加数字
  while (--i >= 0)
  {
    buf[(*index)++] = temp[i];
  }
}

static void hex_to_str(char *buf, int *index, uint32_t num, int uppercase, int width)
{
  const char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
  char temp[32];
  int i = 0;

  if (num == 0)
  {
    temp[i++] = '0';
  }
  else
  {
    while (num > 0)
    {
      temp[i++] = digits[num & 0xF];
      num >>= 4;
    }
  }

  // 计算需要的填充字符数
  int padding = width > i ? width - i : 0;

  // 添加填充字符
  while (padding-- > 0)
  {
    buf[(*index)++] = '0';
  }

  // 添加数字
  while (--i >= 0)
  {
    buf[(*index)++] = temp[i];
  }
}

int vsprintf(char *out, const char *fmt, va_list ap)
{
  int index = 0;
  while (*fmt != '\0')
  {
    if (*fmt == '%')
    {
      fmt++; // 跳过%

      // 解析格式修饰符
      int width = 0;
      char pad = ' ';

      // 检查是否有宽度指定
      if (*fmt >= '0' && *fmt <= '9')
      {
        // 解析宽度
        width = 0;
        while (*fmt >= '0' && *fmt <= '9')
        {
          width = width * 10 + (*fmt - '0');
          fmt++;
        }
      }

      // 检查是否有 'l' 修饰符（long 类型）
      int is_long = 0;
      if (*fmt == 'l')
      {
        is_long = 1;
        fmt++;
      }

      switch (*fmt)
      {
      case 'd':
      case 'i':
      { // 十进制整数
        long num = is_long ? va_arg(ap, long) : va_arg(ap, int);
        num_to_str(out, &index, num, width, pad);
        break;
      }
      case 'c':
      { // 字符
        char c = (char)va_arg(ap, int);
        out[index++] = c;
        break;
      }
      case 's':
      { // 字符串
        char *s = va_arg(ap, char *);
        if (s == NULL)
        {
          const char *nullstr = "(null)";
          while (*nullstr)
          {
            out[index++] = *nullstr++;
          }
        }
        else
        {
          int len = 0;
          const char *p = s;
          while (*p++)
            len++;

          // 添加前导空格以满足宽度要求
          int padding = width > len ? width - len : 0;
          while (padding-- > 0)
          {
            out[index++] = ' ';
          }

          while (*s)
          {
            out[index++] = *s++;
          }
        }
        break;
      }
      case 'x': // 小写十六进制
      case 'X':
      { // 大写十六进制
        uint32_t num = is_long ? va_arg(ap, unsigned long) : va_arg(ap, uint32_t);
        out[index++] = '0';
        out[index++] = (*fmt == 'X') ? 'X' : 'x';
        hex_to_str(out, &index, num, (*fmt == 'X'), width);
        break;
      }
      case 'p':
      { // 指针地址
        void *ptr = va_arg(ap, void *);
        out[index++] = '0';
        out[index++] = 'x';
        hex_to_str(out, &index, (uintptr_t)ptr, 0, 0);
        break;
      }
      case '%':
      { // 转义%
        out[index++] = '%';
        break;
      }
      default:
      {                  // 未知格式符
        va_arg(ap, int); // 跳过无效参数
        out[index++] = '?';
        break;
      }
      }
    }
    else
    {
      out[index++] = *fmt;
    }
    fmt++;
  }
  out[index] = '\0'; // 终止符
  return index;
}
int sprintf(char *out, const char *fmt, ...)
{
  va_list arg;
  va_start(arg, fmt);
  int len = vsprintf(out, fmt, arg);
  va_end(arg);
  return len;
}

int snprintf(char *out, size_t n, const char *fmt, ...)
{
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap)
{
  panic("Not implemented");
}

#endif