#include <stdio.h>

void mergetTwoSortedArr(int *a, int *b, int *c, int s, int e)
{
  int mid = (s + e) / 2;
  int i = mid;
  int j = e;
  int k = e;

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

void mergeSort(int *a, int s, int e)
{
  // base case
  if (s >= e)
  {
    return;
  }

  int b[100], c[100];
  int mid = (s + e) / 2;

  for (int i = s; i <= mid; i++)
  {
    b[i] = a[i];
  }
  for (int i = mid + 1; i <= e; i++)
  {
    c[i] = a[i];
  }

  // recursive case
  mergeSort(b, s, mid);
  mergeSort(c, mid + 1, e);
  mergetTwoSortedArr(b, c, a, s, e);
}

int main()
{
  int n, a[100];
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  mergeSort(a, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }

  printf("\n");
  return 0;
}