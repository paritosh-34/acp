#include <stdio.h>
#include <stdbool.h> // To include bool!!!!

int arraySorted(int *arr, int n)
{
  if (n < 2)
  {
    return true;
  }

  if (arraySorted(arr + 1, n - 1) && arr[0] < arr[1])
  {
    return true;
  }
  else
  {
    return false;
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

  if (arraySorted(a, n))
  {
    printf("Array is sorted.\n");
  }
  else
  {
    printf("Array is not sorted.\n");
  }

  return 0;
}