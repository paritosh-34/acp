#include <stdio.h>

void decreasingSeqPrint(int n)
{
  if (n == 0)
  {
    return;
  }

  printf("%d ", n);
  decreasingSeqPrint(n - 1);
}

void increasingSeqPrint(int n)
{
  if (n == 0)
  {
    return;
  }

  increasingSeqPrint(n - 1);
  printf("%d ", n);
}

int main()
{
  int n;
  scanf("%d", &n);

  decreasingSeqPrint(n);
  printf("\n");
  increasingSeqPrint(n);
  printf("\n");

  return 0;
}