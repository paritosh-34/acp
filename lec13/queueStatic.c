#include <stdio.h>
#include <stdbool.h>

#define CAPACITY 5
#define p printf

int queue[CAPACITY];
int front = 0;
int rear = 0;

void insert()
{
  if (rear == CAPACITY)
  {
    printf("Queue is full\n");
  }
  else
  {
    int ele;
    p("Enter value to be inserted: ");
    scanf("%d", &ele);

    queue[rear++] = ele;
  }
}

void delete ()
{
  if (front == rear)
  {
    p("Queue is empty\n");
  }
  else
  {
    int ele = queue[front];
    p("The deleted element is: %d\n", ele);

    for (int i = 1; i < rear; i++)
    {
      queue[i - 1] = queue[i];
    }
    rear--;
  }
}

void traverse()
{
  if (front == rear)
  {
    p("Queue is empty\n");
  }
  else
  {
    for (int i = 0; i < rear; i++)
    {
      p("%d ", queue[i]);
    }
    p("\n");
  }
}

int main()
{
  insert();
  insert();
  insert();
  delete ();

  traverse();

  return 0;
}
