#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
  int data;
  struct node *link;
};

struct node *root = NULL;

bool isEmpty()
{
  return root == NULL;
}

void addElementsAtEnd()
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));

  printf("Enter data to be add at end:\n");
  scanf("%d", &temp->data);
  temp->link = NULL;

  if (root == NULL)
  {
    root = temp;
  }
  else
  {
    struct node *p;
    p = root;
    while (p->link != NULL)
    {
      p = p->link;
    }
    p->link = temp;
  }
}

void print()
{
  struct node *temp;
  temp = root;

  while (temp != NULL)
  {
    printf("%d -> ", temp->data);
    temp = temp->link;
  }
  printf("\n");
}

int lengthOfLinkedList()
{
  int count = 0;
  struct node *temp;
  temp = root;

  while (temp != NULL)
  {
    count++;
    temp = temp->link;
  }

  return count;
}

int main()
{
  if (isEmpty())
  {
    printf("Yes Linked List is Empty\n");
  }
  else
  {
    printf("No Linked List is not empty\n");
  }

  addElementsAtEnd();
  addElementsAtEnd();
  addElementsAtEnd();
  addElementsAtEnd();

  printf("The Linked List formed is as:\n");
  print();

  if (isEmpty())
  {
    printf("Yes Linked List is Empty\n");
  }
  else
  {
    printf("No Linked List is not empty\n");
  }

  printf("Length of Linked list is: %d\n", lengthOfLinkedList());

  return 0;
}