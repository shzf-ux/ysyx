#include <am.h>

void __am_timer_init() {
}
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }
#define NS_PER_US 1000
//--timescale 1ns/1ps 2ps +1
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t mtime_ns = inl(0xa0000048); // 读取mtime（单位：ns，低32位）
  uptime->us = mtime_ns/6;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
