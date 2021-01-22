#include <stdio.h>
int main()
{
  char arr[10][10];
  int rows, cols;
  scanf("%d", &rows);
  scanf("%d", &cols);

  char ch = 'X';
  int srow = 0, erow = rows - 1, scol = 0, ecol = cols - 1;

  while ((srow <= erow) && (scol <= ecol))
  {

    for (int i = scol; i <= ecol; i++)
    {
      arr[srow][i] = ch;
    }
    srow++;
    for (int i = srow; i <= erow; i++)
    {
      arr[i][ecol] = ch;
    }
    ecol--;

    if (srow <= erow)
    {
      for (int i = ecol; i >= scol; i--)
      {
        arr[erow][i] = ch;
      }
      erow--;
    }

    if (scol <= srow)
    {
      for (int i = erow; i >= srow; i--)
      {
        arr[i][scol] = ch;
      }
      scol++;
    }

    if (ch == 'X')
    {
      ch = 'O';
    }
    else
    {
      ch = 'X';
    }
  }
  printf("\n");

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%c ", arr[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}