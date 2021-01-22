#include <stdio.h>
#include <limits.h>

int main()
{
  int n; // rows and columns
  scanf("%d", &n);

  int arr[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  int max = INT_MIN;

  for (int a = 0; a < n - 1; a++)
  {
    for (int b = 0; b < n - 1; b++)
    {
      for (int e = b + 1; e < n; e++)
      {
        for (int d = a + 1; d < n; d++)
        {
          int difference = arr[d][e] - arr[a][b];
          if (difference > max)
          {
            max = difference;
          }
        }
      }
    }
  }

  printf("%d\n", max);

  return 0;
}