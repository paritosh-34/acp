#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
  int data;
  struct node *link; // Self Referential class
};

struct node *top = NULL;

bool isEmpty()
{
  if (top == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}

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
  if (isEmpty())
  {
    printf("Stack is empty\n");
  }
  else
  {
    struct node *temp = top;
    printf("Data popped is: %d\n", temp->data);
    top = top->link;
    temp->link = NULL;
    free(temp);
  }
}

void traverse()
{
  if (isEmpty())
  {
    printf("Stack is empty\n");
  }
  else
  {
    struct node *temp = top;
    while (temp != NULL)
    {
      printf("%d ", temp->data);
      temp = temp->link;
    }
    printf("\n");
  }
}

int main()
{
  push();
  push();
  push();
  pop();

  traverse();

  return 0;
}
