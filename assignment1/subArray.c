#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);

  long long int results[t];
  for (int z = 0; z < t; z++)
  {

    long long int n;
    scanf("%lld", &n);

    long long int p[n];
    for (long long int i = 0; i < n; i++)
    {
      scanf("%lld", &p[i]);
    }

    long long int count = 0;
    for (long long int i = 0; i < n; i++)
    {
      for (long long int j = i; j < n; j++)
      {
        long long int sum = 0;
        for (long long int k = i; k <= j; k++)
        {
          sum = sum + p[k];
        }
        if (sum % n == 0)
        {
          count++;
        }
      }
    }

    results[z] = count;
  }

  for (int i = 0; i < t; i++)
  {
    printf("%lld\n", results[i]);
  }

  return 0;
}