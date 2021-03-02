#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *root = NULL;

void append()
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));

  printf("Enter data to be appended: ");
  scanf("%d", &temp->data);

  temp->left = NULL;
  temp->right = NULL;

  if (root == NULL)
  {
    root = temp;
  }
  else
  {
    struct node *p = root;
    while (p->right != NULL)
    {
      p = p->right;
    }
    p->right = temp;
    temp->left = p;
  }
}

void insertAtFront()
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));

  printf("Enter the data to be inserted at front: ");
  scanf("%d", &temp->data);
  temp->left = NULL;
  temp->right = NULL;

  if (root == NULL)
  {
    root = temp;
  }

  temp->right = root;
  root->left = temp;
  root = temp;
}

void print()
{
  struct node *temp;
  temp = root;

  while (temp != NULL)
  {
    printf("%d <-> ", temp->data);
    temp = temp->right;
  }
  printf("\n");
}

void length()
{
  struct node *temp = root;
  int count = 0;

  while (temp != NULL)
  {
    count++;
    temp = temp->right;
  }

  printf("Length: %d\n", count);
}

void deleteAtFront()
{
  struct node *temp = root;
  root = root->right;
  root->left = NULL;
  temp->right = NULL;
  free(temp);
}

void deleteAtEnd()
{
  struct node *temp = root;

  while (temp->right != NULL)
  {
    temp = temp->right;
  }

  temp->left->right = NULL;
  temp->left = NULL;
  free(temp);
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
  length();

  return 0;
}
