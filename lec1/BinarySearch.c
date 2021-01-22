#include <stdio.h>

int main()
{
  int arr[100], n, key, start, end, mid;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &key);

  start = 0;
  end = n - 1;

  while (start <= end)
  {
    mid = (start + end) / 2;

    if (arr[mid] == key)
    {
      printf("Key is present at Index %d.\n", mid);
      break;
    }
    else if (arr[mid] > key)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }

  if (start > end)
  {
    printf("Key is not present at any index.\n");
  }

  return 0;
}