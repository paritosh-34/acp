#include <stdio.h>

void bubbleSort(int *a, int n, int i, int j)
{
  if (i == n - 1)
  {
    return;
  }
  if (j == n - 1 - i)
  {
    bubbleSort(a, n, i + 1, 0);
  }
  else
  {
    if (a[j] > a[j + 1])
    {
      int temp = a[j];
      a[j] = a[j + 1];
      a[j + 1] = temp;
    }
    bubbleSort(a, n, i, j + 1);
  }
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

  bubbleSort(a, n, 0, 0);

  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }

  printf("\n");
  return 0;
}