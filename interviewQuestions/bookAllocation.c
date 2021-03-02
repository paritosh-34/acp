#include <stdio.h>

int bookAllocation(int books[], int n, int m)
{
  int totalPages = 0;
  int s = 0, e = 0;

  for (int i = 0; i < n; i++)
  {
    totalPages += books[i];
  }
}

int main()
{
  int t, n, m;
  // n is the number of students
  // m is the number of books

  scanf("%d", &t);

  while (t--)
  {
    scanf("%d%d", &n, &m);
    int books[1000005];

    for (int i = 0; i < n; i++)
    {
      scanf("%d", &books[i]);
    }

    printf("%d", bookAllocation(books, n, m));
  }

  return 0;
}