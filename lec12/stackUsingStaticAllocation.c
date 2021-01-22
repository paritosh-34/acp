#include <stdio.h>

#define CAPACITY 5
int stack[CAPACITY];
int top = -1;

bool isFull()
{
  if ()
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

int main()
{
  int op, x;

  while (1)
  {
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Traverse\n");
    printf("5. exit\n\n");

    printf("Enter the Operation you'd like to perform:\n");

    scanf("%d", &op);
    switch (op)
    {
    case 1:
      d break;

    default:
      break;
    }
  }

  return 0;
}