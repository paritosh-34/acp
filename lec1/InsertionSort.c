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

  // Insertion Sort Algo:
  for (int i = 1; i < n; i++)
  {
    int no = arr[i];
    int j;
    for (j = i - 1; j >= 0 && arr[j] > no; j--)
    {
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = no;
  }

  printf("After Sorting:\n");
  for (int i = 0; i < n; i++)
    printf("Value is: %d\n", arr[i]);
  printf("\n");

  return 0;
}