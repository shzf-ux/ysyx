#include <am.h>
#include <stdio.h>

// 仅存储mcycle的低32位基准值
static uint32_t mcycle_base = 0;

void __am_timer_init()
{
  uint32_t low, high;
  asm volatile("csrrw %0, mcycleh, x0" : "=r"(high));
  asm volatile("csrrw %0, mcycle, x0" : "=r"(low));
  mcycle_base = ((uint64_t)high << 32) | low;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime)
{
  uint32_t low_current, high_current;
  uint64_t mcycle_current, cycle_rel;

  asm volatile("csrrw %0, mcycleh, x0" : "=r"(high_current));
  asm volatile("csrrw %0, mcycle, x0" : "=r"(low_current));

  mcycle_current = ((uint64_t)high_current << 32) | low_current;
  cycle_rel = mcycle_current - mcycle_base;
  uptime->us = cycle_rel / 3;
}
void __am_timer_rtc(AM_TIMER_RTC_T *rtc)
{
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour = 0;
  rtc->day = 1;
  rtc->month = 1;
  rtc->year = 2025;
}
