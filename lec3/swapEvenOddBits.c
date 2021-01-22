// Swap even and odd bits of a number

#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  // 0XAAAAAAAA = 1010101010 (A = 10 in hexadecimal.)
  // and operator with it reveals the 1's in even positions
  int x = (n & 0XAAAAAAAA);
  x = x >> 1;

  // 0X55555555 = 0101010101
  // and operator with it reveals the 1's in odd positions
  int y = (n & 0X55555555);
  y = y << 1;

  printf("%d\n", (x | y));

  return 0;
}