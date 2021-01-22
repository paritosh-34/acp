#include <stdio.h>
#include <time.h>

int main()
{
  // Experimental Analysis
  clock_t st = clock();

  int a = 10, b = 20;
  int sum = a + b;
  printf("Sum is: %d\n\n", sum);

  clock_t et = clock();
  printf("The total time taken is: %lu\n", et - st);

  return 0;
}