#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
  char temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

char result[100][100];
void permute(char *a, int s, int e, char *target, int *count)
{
  int i;
  if (s == e)
  {
    if (strcmp(a, target) > 0)
    {
      strcpy(result[*count], a);
      *count = *count + 1;
    }
  }
  else
  {
    for (i = s; i <= e; i++)
    {
      swap((a + s), (a + i));
      permute(a, s + 1, e, target, count);
      swap((a + s), (a + i));
    }
  }
}

int main(void)
{
  char a[100], r[100], t[100];
  scanf("%s", a);

  strcpy(r, a);
  strcpy(t, a);
  int n = strlen(a);

  int count = 0;
  permute(a, 0, n - 1, t, &count);

  for (int i = 0; i < count; i++)
  {
    printf("%s\n", result[i]);
  }

  return 0;
}