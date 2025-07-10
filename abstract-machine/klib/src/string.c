#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s)
{
  // panic("Not implemented");
  int n = 0;
  if (s == NULL)
  {
    return 0;
  }
  else
  {
    while (*s != '\0')
    {
      s++;
      n++;
    }
    return n;
  }
}

char *strcpy(char *dst, const char *src)
{
  // panic("Not implemented");
  // char *p = src;
  char *q = dst;
  while (1)
  {
    *q = *src;
    if (*q == '\0')
    {
      break;
    }
    src++;
    q++;
  }
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n)
{
  if (n == 0)
    return dst; // 特殊处理 n=0 情况

  char *q = dst;
  // 复制 src 内容（最多 n-1 个字符，保留1字节给\0）
  while (n > 1 && *src != '\0')
  {
    *q++ = *src++;
    n--;
  }

  // 处理两种情况：
  // 1. 如果 src 已结束，用 \0 填充剩余空间
  // 2. 如果 n=1，填充最后1字节为 \0
  while (n > 0)
  {
    *q++ = '\0'; // 关键：确保填充剩余空间
    n--;
  }

  return dst;
}
// 把src拼接到dst的末尾
char *strcat(char *dst, const char *src)
{
  // 1. 参数检查
  if (dst == NULL || src == NULL)
  {
    return dst; // 或 assert/返回错误
  }
  // panic("Not implemented");
  char *p = dst;
  while (*p != '\0')
  {
    p++;
  }
  // 3. 拼接src（含终止符）
  while (*src != '\0')
  {
    *p++ = *src++;
  }
  *p = '\0'; // 关键修复：添加终止符

  return dst;
}


int strcmp(const char *s1, const char *s2) // 相同返回0，s1大于s2返回大于0的数，反之亦然
{
  // panic("Not implemented");
  while (*s1 != '\0' || *s2 != '\0')
  {
    if (*s1 > *s2)
    {
      return 1;
    }
    else if (*s1 < *s2)
    {
      return -1;
    }
    s1++;
    s2++;
  }
  return 0;
}
int strncmp(const char *s1, const char *s2, size_t n)
{
  for (; n > 0; n--, s1++, s2++)
  {
    if (*s1 != *s2)
      return *(const unsigned char *)s1 - *(const unsigned char *)s2;
    if (*s1 == '\0') // 提前结束
      break;
  }
  return 0;
}
void *memset(void *s, int c, size_t n)
{
  // panic("Not implemented");
  char *p = s;
  while (n != 0)
  {
    *p = c;
    p++;
    n--;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n)
{
  if (dst < src)
  {
    char *d = (char *)dst;
    char *s = (char *)src;
    while (n--)
    {
      *d = *s;
      d++;
      s++;
    }
  }
  else
  {
    char *d = (char *)dst + n - 1;
    char *s = (char *)src + n - 1;
    while (n--)
    {
      *d = *s;
      d--;
      s--;
    }
  }
  return dst;
}

void *memcpy(void *out, const void *in, size_t n)
{
  // panic("Not implemented");
  char *p = out;
  const char *q = in;
  while (n != 0)
  {
    *p = *q;
    p++;
    q++;

    n--;
  }
  return out;
}
int memcmp(const void *s1, const void *s2, size_t n)
{
  const unsigned char *p1 = s1, *p2 = s2; // 改为 unsigned
  while (n--)
  {
    if (*p1 != *p2)
      return *p1 - *p2;
    p1++;
    p2++;
  }
  return 0;
}

#endif
