#include <am.h>
#include <klib-macros.h>
#include "ysyxsoc.h"
#include <stdio.h>
#include <riscv/riscv.h>
#include <am.h>

static uint32_t Width = 640;
static uint32_t Height = 480;

void __am_gpu_init()
{
    uint32_t *fb = (uint32_t *)(uintptr_t)VGA_FB;
    for (int i = 0; i < Width * Height; i++)
    {
        fb[i] = 0;
    }
    outl(VGA_SYNC, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg)
{
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, 
    .has_accel = false,
    .width = Width, 
    .height = Height,
    .vmemsz = Width * Height * sizeof(uint32_t)
  };
}
// AM帧缓冲控制器, 可写入绘图信息, 向屏幕(x, y)坐标处绘制w*h的矩形图像. 图像像素按行优先方式存储在pixels中, 每个像素用32位整数以00RRGGBB的方式描述颜色. 若sync为true, 则马上将帧缓冲中的内容同步到屏幕上.
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl)
{

    int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
    // x 为横坐标， y为纵坐标
    uint32_t *pixels = ctl->pixels; // 获取像素
    uint32_t *fb = (uint32_t *)(uintptr_t)VGA_FB;
    uint32_t sw =Width; // 读屏幕宽度

    for (int i = y; i < y + h; i++)       // 遍历绘制区域的每一行
    {
        for (int j = x; j < x + w; j++) // 扫描每一列
        {
        //    printf("%d\n", sw * i + j);
            fb[sw * i + j] = pixels[w * (i - y) + (j - x)];
        }
    }
    if (ctl->sync)
    {
        outl(VGA_SYNC, 1);
    }
    else
    {
        outl(VGA_SYNC, 0);
    }
}

void __am_gpu_status(AM_GPU_STATUS_T *status)
{
    status->ready = true;
}
