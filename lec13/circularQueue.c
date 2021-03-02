#include <stdio.h>
#include <stdbool.h>
#define size 5

int cqueue[size];
int front = -1;
int rear = -1;

bool isFull()
{
  if (rear == size - 1 || front == rear + 1)
  {
    return true;
  }
  return false;
}

bool isEmpty()
{
  if (front == -1 && rear == -1)
  {
    return true;
  }
  return false;
}

void insert(int ele)
{
  if (isFull)
  {
    printf("Queue is full, we can't insert\n");
  }
  else if (isEmpty())
  {
    front = 0;
    rear = 0;
    cqueue[rear] = ele;
  }
  else if (rear == size - 1)
  {
    rear = 0;
    cqueue[rear] = ele;
  }
  else
  {
    cqueue[++rear] = ele;
  }
}

void delete ()
{
  if (isEmpty())
  {
    printf("Queue is empty\n");
  }
  else if (front == rear)
  {
    printf("%d was deleted\n", cqueue[front]);
    front = rear = -1;
  }
  else if (front == size - 1)
  {
    printf("%d was deleted\n", cqueue[front]);
    front = 0;
  }
  else
  {
    printf("%d was deleted\n", cqueue[front]);
    front++;
  }
}

void traverse()
{
  if (isEmpty())
  {
    printf("Queue is empty\n");
  }
  if (rear >= front)
  {

    for (int i = front; i <= rear; i++)
    {
      printf("%d ", cqueue[i]);
    }
    printf("\n");
  }
  else
  {

    for (int i = front; i < size; i++)
    {
      printf("%d ", cqueue[i]);
    }
    for (int i = 0; i <= rear; i++)
    {
      printf("%d ", cqueue[i]);
    }

    printf("\n");
  }
}

int main()
{

  return 0;
}
