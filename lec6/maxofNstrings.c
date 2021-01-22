#include <stdio.h>
#include <string.h>

int main()
{
  int n, maxl = 0;
  char arr[100], result[100];

  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%s", arr);

    int l = strlen(arr);
    if (l > maxl)
    {
      maxl = l;
      strcpy(result, arr);
    }
  }

  printf("Max Length: %d\n", maxl);
  printf("The String is: %s\n", result);

  return 0;
}