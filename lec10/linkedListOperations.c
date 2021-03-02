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

// add elements at end
void append()
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));

  printf("Enter data to add at end: ");
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

void insertAtFront()
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));

  printf("Enter data to add at front: ");
  scanf("%d", &temp->data);

  temp->link = root;
  root = temp;
}

void deleteAtFront()
{
  struct node *temp;
  temp = root;

  root = root->link;
  temp->link = NULL;

  free(temp);
}

void deleteAtEnd()
{
  struct node *temp;
  temp = root;

  while (temp->link->link != NULL)
  {
    temp = temp->link;
  }

  free(temp->link);
  temp->link = NULL;
}

void reverse()
{
  struct node *current = root;
  struct node *prev = NULL;
  struct node *next;

  while (current != NULL)
  {
    next = current->link;
    current->link = prev;
    prev = current;
    current = next;
  }

  root = prev;
}

int lengthOfLN()
{
  struct node *p;
  p = root;
  int count = 0;

  while (p != NULL)
  {
    count++;
    p = p->link;
  }

  return count;
}

void print()
{
  struct node *p;
  p = root;

  while (p != NULL)
  {
    printf("%d -> ", p->data);
    p = p->link;
  }
  printf("\n");
}

int main()
{
  append();
  append();
  append();
  insertAtFront();
  insertAtFront();
  deleteAtFront();
  deleteAtEnd();

  print();
  printf("Lenght is: %d\n", lengthOfLN());

  reverse();

  print();
  printf("Lenght is: %d\n", lengthOfLN());

  return 0;
}