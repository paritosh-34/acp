#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define CAPACITY 5
int stack[CAPACITY];
int top = -1;

bool isFull()
{
  if (top == CAPACITY - 1)
  {
    return true;
  }

  return false;
}

bool isEmpty()
{
  if (top == -1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void Push(int ele)
{
  if (isFull())
  {
    printf("Stack is Full / overflowing\n");
  }
  else
  {
    top++;
    stack[top] = ele;
    printf("%d is pushed successfully\n", ele);
  }
}

void Pop()
{
  if (isEmpty())
  {
    printf("Stack is empty / underflow\n");
  }
  else
  {
    int ele = stack[top];
    printf("The element popped is: %d\n", ele);
    top--;
  }
}

void Peek()
{
  if (isEmpty())
  {
    printf("Stack is empty / underflow\n");
  }
  else
  {
    printf("The on top is: %d\n", stack[top]);
  }
}

void Traverse()
{
  if (isEmpty())
  {
    printf("Stack is empty\n");
  }
  else
  {
    for (int i = 0; i <= top; i++)
    {
      printf("%d ", stack[i]);
    }
    printf("\n");
  }
}

int Length()
{
  printf("The current length/size of stack is: %d\n", top + 1);
  return top + 1;
}

int main()
{
  int op, x;

  while (1)
  {
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Traverse\n");
    printf("5. Length\n");
    printf("6. Exit\n\n");

    printf("Enter the Operation you'd like to perform: ");

    scanf("%d", &op);
    switch (op)
    {
    case 1:
      printf("Enter the element you wanna push: ");
      scanf("%d", &x);

      Push(x);
      break;

    case 2:
      Pop();
      break;

    case 3:
      Peek();
      break;

    case 4:
      Traverse();

    case 5:
      Length();
      break;

    case 6:
      return 0;

    default:
      printf("The value you entered is wrong\n");
    }
  }

  return 0;
}