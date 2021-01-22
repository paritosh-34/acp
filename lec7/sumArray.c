#include <stdio.h>

int sumArray(int *a, int n)
{
  if (n == 0)
  {
    return 0;
  }

  return a[0] + sumArray(a + 1, n - 1);
}

int main()
{
  int n;
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  printf("Sum is: %d\n", sumArray(a, n));
  return 0;
}