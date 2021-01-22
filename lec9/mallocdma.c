#include <stdio.h>
#include <stdlib.h>

struct emp
{
  int eno;
  char ename[20];
  float esal;
};

int main()
{
  struct emp *ptr;
  ptr = (struct emp *)malloc(sizeof(struct emp));

  if (ptr == NULL)
  {
    printf("Memory not available");
  }
  else
  {
    printf("\nEnter Employee details:\n");

    scanf("%d%s%f", &ptr->eno, ptr->ename, &ptr->esal);

    printf("\nDetails of employee are:-\n\n");
    printf("%d %s %f\n\n", ptr->eno, ptr->ename, ptr->esal);
  }

  free(ptr);
  return 0;
}
