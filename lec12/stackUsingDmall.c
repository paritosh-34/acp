#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *link; // Self Reference
};

struct node *top = NULL;

void push()
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(int));

  printf("Enter the value to be pushed:\n");
  scanf("%d", &temp->data);

  temp->link = top;
  top = temp;
}

void pop()
{
}

int main()
{

  return 0;
}
