#include <stdio.h>
#include <string.h>

int main()
{
  char ch[100], result[100];
  gets(ch);

  int i = 0;
  int ls = strlen(ch);

  for (int i = 0; i < ls; i++)
  {
    result[i] = ' ';
  }
  result[ls] = '\0';

  while (i < ls)
  {
    while (i < ls && ch[i] == ' ')
    {
      i++;
      if (i == ls)
      {
        break;
      }
    }

    int j = i + 1;
    while (j < ls && ch[j] != ' ')
    {
      j++;
    }

    int x = i;
    for (int k = j - 1; k >= i; k--)
    {
      result[x] = ch[k];
      x++;
    }
    i = j + 1;
  }

  printf("%s\n", result);
  return 0;
}