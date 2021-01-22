#include <stdio.h>

void bubbleSort(int *a, int n, int i)
{
  if (i == n - 1)
  {
    return;
  }

  for (int j = 0; j < n - 1 - i; j++)
  {
    if (a[j] > a[j + 1])
    {
      int temp = a[j];
      a[j] = a[j + 1];
      a[j + 1] = temp;
    }
  }

  bubbleSort(a, n, i + 1);
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

  bubbleSort(a, n, 0);

  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }

  printf("\n");
  return 0;
}