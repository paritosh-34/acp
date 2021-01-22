#include <stdio.h>

void mergetTwoSortedArr(int *a, int *b, int *c, int n, int m)
{
  int i = n - 1;
  int j = m - 1;
  int k = m + n - 1;

  while (i >= 0 && j >= 0)
  {
    if (a[i] > b[j])
      c[k--] = a[i--];

    else
      c[k--] = b[j--];
  }

  while (i >= 0)
    c[k--] = a[i--];

  while (j >= 0)
    c[k--] = b[j--];
}

int main()
{
  int n, m, a[100], b[100], c[1000];
  scanf("%d%d", &n, &m);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &b[i]);
  }

  mergetTwoSortedArr(a, b, c, n, m);
  for (int i = 0; i < m + n; i++)
  {
    printf("%d ", c[i]);
  }

  printf("\n");
  return 0;
}