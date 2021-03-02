#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
  int data;
  struct node *link;
};

struct node *root = NULL;

void append()
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));

  printf("Enter the data to be inserted at front: ");
  scanf("%d", &temp->data);
  temp->link = NULL;

  if (root == NULL)
  {
    root = temp;
    root->link = root;
  }
  else
  {
    struct node *p = root;
    while (p->link != p)
    {
      p = p->link;
    }
    temp->link = p->link;
    p->link = temp;
  }
}

void insertAtFront()
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));

  printf("Enter the data to be inserted at front: ");
  scanf("%d", &temp->data);
  temp->link = NULL;

  if (root == NULL)
  {
    root = temp;
    root->link = root;
  }
  else
  {
    struct node *p = root;
    while (p->link != root)
    {
      p = p->link;
    }
    p->link = temp;
    temp->link = root;
    root = temp;
  }
}

void print()
{
  struct node *temp;
  temp = root;

  while (temp->link != root)
  {
    printf("%d -> ", temp->data);
    temp = temp->link;
  }
  printf("%d\n", temp->data);
}

int main()
{
  insertAtFront();
  insertAtFront();
  insertAtFront();

  print();

  return 0;
}
