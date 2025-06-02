#include <amtest.h>

#define FPS 60
#define N   32

static inline uint32_t pixel(uint8_t r, uint8_t g, uint8_t b)
{ // “Pixel” 即像素
  return (r << 16) | (g << 8) | b;
}

static inline uint8_t R(uint32_t p) { return p >> 16; }
static inline uint8_t G(uint32_t p) { return p >> 8; }
static inline uint8_t B(uint32_t p) { return p; }

static uint32_t canvas[N][N];
static int used[N][N];

static uint32_t color_buf[32 * 32];

void redraw() {
  int w = io_read(AM_GPU_CONFIG).width / N;//每个块的宽
  int h = io_read(AM_GPU_CONFIG).height / N;//每个块的高
  int block_size = w * h;//每个块所占的像素大小
  assert((uint32_t)block_size <= LENGTH(color_buf));
//将屏幕划分为 N x N 个小块，每个小块的大小是 w x h 像素。
  int x, y, k;
  for (y = 0; y < N; y ++) {//  // 遍历每一行块（从上到下）
    for (x = 0; x < N; x ++) {// // 遍历每一列块（从左到右）
      for (k = 0; k < block_size; k ++)//遍历每一个像素
      {
        color_buf[k] = canvas[y][x];//把每个块填上一样的颜色
      }
      //填充块之后，发送
      io_write(AM_GPU_FBDRAW, x * w, y * h, color_buf, w, h, false);//传入 块的左上角的坐标和像素颜色,宽高
    }
  }
  io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);
}

static uint32_t p(int tsc) {
  int b = tsc & 0xff;
  return pixel(b * 6, b * 7, b);
}

void update() {
  static int tsc = 0; //// 时间计数器，每次调用递增
  static int dx[4] = {0, 1, 0, -1}; //// 方向增量：右、下、左、上（x轴）
  static int dy[4] = {1, 0, -1, 0}; //// 方向增量：下、右、上、左（y轴）

  tsc ++;

  for (int i = 0; i < N; i++) // 标记所有块为未访问
    for (int j = 0; j < N; j ++) {
      used[i][j] = 0;
    }

  int init = tsc * 1;
  canvas[0][0] = p(init); used[0][0] = 1;
  int x = 0, y = 0, d = 0;
  for (int step = 1; step < N * N; step ++) {
    for (int t = 0; t < 4; t ++) {
      int x1 = x + dx[d], y1 = y + dy[d];
      if (x1 >= 0 && x1 < N && y1 >= 0 && y1 < N && !used[x1][y1]) {
        x = x1; y = y1;
        used[x][y] = 1;
        canvas[x][y] = p(init + step / 2);
        break;
      }
      d = (d + 1) % 4;
    }
  }
}

void video_test() {
  unsigned long last = 0;
  unsigned long fps_last = 0;
  int fps = 0;

  while (1) {
    unsigned long upt = io_read(AM_TIMER_UPTIME).us / 1000; // 从硬件定时器读取自启动以来的微秒数。将时间转换为毫秒
    if (upt - last > 1000 / FPS) {//设定的游戏帧率为30，则每一帧为33ms
      update(); // 更新逻辑，设置颜色
      redraw(); // 将新状态绘制到屏幕
      last = upt;
      //记录当前帧的时间戳
      fps ++;
    }
    if (upt - fps_last > 1000) {//每经过1s
      // display fps every 1s
      printf("%d: FPS = %d\n", upt, fps);
      fps_last = upt;
      fps = 0;
    }
  }
}
