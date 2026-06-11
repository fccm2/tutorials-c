#include <stdio.h>

unsigned int sq_table[80];

#define MUM_SQUARE 80

int
floor_square_root(int x)
{
  int r;
  for (r = (MUM_SQUARE - 1); r >= 0; r--) {
    if (sq_table[r] > x) continue;
    return r;
  }
}

void
init_square_table()
{
  for (int s = 0; s < MUM_SQUARE; s++) {
    sq_table[s] = (s * s);
  }
}

int main(void)
{
  int x;
  int r;
  init_square_table();
  x = 15;
  printf("x:%d\n", x);
  r = floor_square_root(x);
  printf("r:%d\n", r);
  for (int s = 0; s < 13; s++) {
    printf("[%d]: %d, (%d)\n", s, sq_table[s], (s * s));
  }
  return 0;
}

