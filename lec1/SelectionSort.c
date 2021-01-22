#include <stdio.h>

int main()
{
  int arr[100], n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Before Sorting:\n");
  for (int i = 0; i < n; i++)
    printf("Value is: %d\n", arr[i]);
  printf("\n");

  // Selection Sort Algo:
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min])
        min = j;
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }

  printf("After Sorting:\n");
  for (int i = 0; i < n; i++)
    printf("Value is: %d\n", arr[i]);
  printf("\n");

  return 0;
}