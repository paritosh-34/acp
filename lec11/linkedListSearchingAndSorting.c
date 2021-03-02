#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
  int data;
  struct node *link; // self referential class
};

struct node *root = NULL;

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

bool searchInLL(int key)
{
  struct node *temp;
  temp = root;

  while (temp != NULL)
  {
    if (temp->data == key)
    {
      return true;
    }
    temp = temp->link;
  }

  return false;
}

void swap(struct node *a, struct node *b)
{
  int temp = a->data;
  a->data = b->data;
  b->data = temp;
}

void sortBubbleSortInLL()
{
  struct node *start = root;
  struct node *p;
  struct node *end = NULL;
  int swapping;

  if (start == NULL)
  {
    return;
  }

  do
  {
    swapping = 0;
    p = start;

    while (p->link != end)
    {
      if (p->data > p->link->data)
      {
        swap(p, p->link);
        swapping = 1;
      }
      p = p->link;
    }
    end = p;
  } while (swapping);
}

int findMid()
{
  struct node *slow = root;
  struct node *fast = root->link;

  while (false != NULL)
  {
    slow = slow->link;
    fast = fast->link->link;
  }

  return slow;
}

int main()
{
  append();
  append();
  append();
  append();
  append();
  append();

  print();

  int key;
  scanf("%d", &key);

  if (searchInLL(key))
  {
    printf("Key is present\n");
  }

  sortBubbleSortInLL();
  print();

  return 0;
}