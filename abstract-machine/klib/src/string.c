#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  //panic("Not implemented");
  int n = 0;
  if (s == NULL)
  {
    return 0;
  }
   else
   {
    while(*s!='\0')
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
  while (*src != '\0')
  {
    *q = *src;
    src++;
    q++;
  }
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n)
{
  // panic("Not implemented");
  char *q = dst;
  while (*src != '\0' && n != 0)
  {
    *q = *src;
    src++;
    q++;
    n--;
  }
  return dst;
}
//把src拼接到dst的末尾
char *strcat(char *dst, const char *src)
{
  // panic("Not implemented");
  char *p = dst;
  while (*p != '\0')
  {
    p++;
  }
  while (*src != '\0')
  {
    *p = *src;
    p++;
    src++;
  }
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
  // panic("Not implemented");
  // panic("Not implemented");
  while ((*s1 != '\0' || *s2 != '\0') && n != 0)
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
    n--;
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

 void*memcpy(void *out, const void *in, size_t n)
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
    // panic("Not implemented");
    char *S1 = (char *)s1;
    char *S2 = (char *)s2;
    while (n--)
    {
      if (*S1 > *S2)
        return 1;
      if (*S1 < *S2)
        return -1;
      S1++;
      S2++;
    }
    return 0;
  }

#endif
