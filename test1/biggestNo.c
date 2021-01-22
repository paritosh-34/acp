#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  scanf("%d", &n);

  char a[n][100];
  for (int i = 0; i < n; i++)
  {
    scanf("%s", a[i]);
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (strcmp(a[j + 1], a[j]) > 0)
      {
        char temp[100];
        strcpy(temp, a[j]);
        strcpy(a[j], a[j + 1]);
        strcpy(a[j + 1], temp);
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    printf("%s\n", a[i]);
  }
}