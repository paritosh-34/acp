#include <stdio.h>
#include <string.h>

int main()
{
  char a[100], b[100];

  scanf("%s", a);
  scanf("%s", b);

  int x = strlen(a);
  int y = strlen(b);

  for (int i = 0; i < y; i++)
    a[x++] = b[i];

  a[x] = '\0';
  printf("%s\n", a);

  return 0;
}