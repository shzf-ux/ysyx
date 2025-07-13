#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  char sprint_buf[1024];
  va_list arg;        // 遍历可变参数列表
  va_start(arg, fmt); // 第二个参数为最后一个固定参数名字
  int len = vsprintf(sprint_buf, fmt, arg);
  va_end(arg);
  putstr(sprint_buf);//不断调用putch
  return len; //  返回值是写入的字符个数
}
static void num_to_str(char *buf, int *index, int num)
{
  if (num < 0)
  {
    buf[(*index)++] = '-';
    num = -num;
  }

  char temp[32];
  int i = 0;
  do
  {
    temp[i++] = '0' + (num % 10);
    num /= 10;
  } while (num > 0);

  while (--i >= 0)
  {
    buf[(*index)++] = temp[i];
  }
}

// 辅助函数：将十六进制数转换为字符串
static void hex_to_str(char *buf, int *index, uint32_t num, int uppercase)
{
  const char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
  buf[(*index)++] = '0';
  buf[(*index)++] = uppercase ? 'X' : 'x';

  int shift = 28;
  while (shift >= 0)
  {
    char c = digits[(num >> shift) & 0xF];
    if (c != '0' || shift == 0)
    { // 跳过前导零
      buf[(*index)++] = c;
    }
    shift -= 4;
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
      switch (*fmt)
      {
      case 'd':
      { // 十进制整数
        int num = va_arg(ap, int);
        num_to_str(out, &index, num);
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
        uint32_t num = va_arg(ap, uint32_t);
        hex_to_str(out, &index, num, (*fmt == 'X'));
        break;
      }
      case 'p':
      { // 指针地址
        void *ptr = va_arg(ap, void *);
        out[index++] = '0';
        out[index++] = 'x';
        hex_to_str(out, &index, (uintptr_t)ptr, 0);
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

int sprintf(char *out, const char *fmt, ...) // sprintf(buffer, "Name: %s, Age: %d, Symbol, "Alice", 25, 'A');
{                                              
  // panic("Not implemented");
  va_list arg;        // 遍历可变参数列表
  va_start(arg, fmt); // 第二个参数为最后一个固定参数名字
  int len = vsprintf(out, fmt, arg);
  va_end(arg);
  return len; //  返回值是写入的字符个数
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
