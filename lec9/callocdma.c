#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, *arr;

  printf("Enter size of arr:");
  scanf("%d", &n);

  arr = (int *)calloc(sizeof(int), n);

}