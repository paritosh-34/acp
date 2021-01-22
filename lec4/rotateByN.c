#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  char ch[100];

  scanf("%d ", &n); // There must be a space after %d if using gets after scanf
  gets(ch);

  int x = strlen(ch);

  for (int i = x - 1; i >= 0; i--)
    ch[i + n] = ch[i];

  int index = 0;
  for (int i = x; i < strlen(ch); i++)
    ch[index++] = ch[i];

  ch[x] = '\0';
  printf("%s\n", ch);

  return 0;
}