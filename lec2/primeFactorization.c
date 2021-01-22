#include <stdio.h>
#include <math.h>

int main()
{
  int n, count;
  scanf("%d", &n);

  int arr[n];
  int index = 0;

  for (int i = 2; i < sqrt(n); i++)
  {
    if (n % i == 0)
    {
      count = 0;

      while (n % i == 0)
      {
        count++;
        n = n / i;
      }

      for (int j = 0; j < count; j++)
        printf("%d ", i);
    }
  }

  if (n > 2)
    printf("%d", n);

  printf("\n");

  return 0;
}