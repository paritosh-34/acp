#include <stdio.h>
// #include <limits.h> for INT_MIN

int main()
{
  int n, p[1000] = {0};
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &p[i]);
  }

  int max = p[0]; // or int max = INT_MIN
  int left = 0;
  int right = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      int sum = 0;
      for (int k = i; k <= j; k++)
      {
        printf("%d ", p[k]);
        sum = sum + p[k];
      }
      if (sum > max)
      {
        max = sum;
        left = i;
        right = j;
      }
      printf("\n");
    }
  }

  printf("\n");
  for (int i = left; i <= right; i++)
  {
    printf("%d ", p[i]);
  }

  printf("\nMaximum Sum is: %d\n", max);

  return 0;
}