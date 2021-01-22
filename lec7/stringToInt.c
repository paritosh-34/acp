#include <stdio.h>
#include <string.h>

int stringToInt(char *a, int n)
{
  if (n == 0)
  {
    return 0;
  }

  int ld = a[n - 1] - '0';
  return stringToInt(a, n - 1) * 10 + ld;
}

int main()
{
  char a[100];
  scanf("%s", a);

  int ls = strlen(a);
  int x = stringToInt(a, ls);

  printf("%d\n", x);

  return 0;
}