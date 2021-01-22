#include <stdio.h>
#include <string.h>

char *moveAllxAtEnd(char *arr, int l, char *out, int ol)
{
  // base case
  if (l == 0)
  {
    out[l] = '\0';
    return out;
  }

  // recursive case
  char cha = arr[0];
  if (cha == 'x')
  {
    moveAllxAtEnd(arr + 1, l - 1, out, ol - 1);
    out[ol - 1] = cha;
  }
  else
  {
    out[0] = cha;
    moveAllxAtEnd(arr + 1, l - 1, out + 1, ol - 1);
  }

  return out;
}

int main()
{
  char arr[100], result[100], out[100];
  scanf("%s", arr);

  int l = strlen(arr);
  int ol = l;

  strcpy(result, moveAllxAtEnd(arr, l, out, ol));

  printf("%s\n", result);
  return 0;
}