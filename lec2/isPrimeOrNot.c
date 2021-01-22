#include <stdio.h>
#include <math.h>

int main()
{
  int n, i, flag = 1;

  scanf("%d", &n);

  for (i = 2; i < sqrt(n); i++)
  {
    if (n % i == 0)
    {
      flag = 0;
      break;
    }
  }

  if (flag)
    printf("%d is a prime no.\n", n);
  else
    printf("%d is a not prime no.\n", n);

  return 0;
}