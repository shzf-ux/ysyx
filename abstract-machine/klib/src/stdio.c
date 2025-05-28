#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

char *num_to_str(char *out, int *index, int num)
{              // 把num存入out
  if (num < 0) // 处理负号
  {
    *(out + (*index)) = '-';
    (*index)++;
    num = -num;
  } // num 114514
  char tmp[100];
  int i = 0;
  // 处理 0 的情况
  if (num == 0)
  {
    tmp[i++] = '0';
  }
  while (num)
  {
    tmp[i] = num % 10 + '0';
    num /= 10;
    i++;
  }
  // 反转字符串 tmp415411
  while (i)
  {
    *(out + (*index)) = tmp[i - 1];
    (*index)++;
    i--;
  }
  return out;
}

int vsprintf(char *out, const char *fmt, va_list ap)
{
  // panic("Not implemented");
  int index = 0;
  while (*fmt != '\0')
  {
    if (*fmt == '%')
    {
      fmt++; // 跳过%
      switch (*fmt)
      {
      case 'd':
        int num = va_arg(ap, int); // 获取下一个参数
        num_to_str(out, &index, num);
        break;
      case 's':
        char *s = va_arg(ap, char *);
        while (*s)
        {
          *(out + (index)) = *s;
          s++;
          index++;
        }

        break;
      default:
        break;
      }
    }
    else // 处理普通字符
    {
      *(out + index) = *fmt;
      index++;
    }
    fmt++;
  }
  *(out + (index)) = '\0';
  return index;
}

int sprintf(char *out, const char *fmt, ...) // sprintf(buffer, "Name: %s, Age: %d, Symbol: %c%%", "Alice", 25, 'A');
{                                               //  返回值是写入的字符个数
  // panic("Not implemented");
  va_list arg;        // 遍历可变参数列表
  va_start(arg, fmt); // 第二个参数为最后一个固定参数名字
  int len = vsprintf(out, fmt, arg);
  va_end(arg);
  return len;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
