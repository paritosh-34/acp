#include <stdio.h>
void toh(int n, char src, char helper, char dest)
{
  // printf("\n\n Values: %d, %c, %c, %c\n\n", n, src, helper, dest);
  if (n == 0)
  {
    return;
  }
  toh(n - 1, src, helper, dest);
  printf("Take disc %d from %c to %c\n", n, src, dest);
  toh(n - 1, helper, dest, src);
}
int main()
{
  int n;
  scanf("%d", &n);

  toh(n, 'A', 'B', 'C');

  return 0;
}