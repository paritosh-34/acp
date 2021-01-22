#include <stdio.h>
#include <math.h>

int main()
{
  int cs = 0, ms = 0, n, arr[1000];
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++)
  {
    cs = cs + arr[i];

    if (cs < 0)
    {
      cs = 0;
    }

    ms = fmax(ms, cs);
  }

  printf("Maximum Sum is: %d\n", ms);
  printf("Current sum is: %d\n", cs);
}