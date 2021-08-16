/* 2. WAP to initialize nine values in 3x3 matrix, pass it to user define function.
 Find the largest element of 2D array and print it in main function.
 */
#include <stdio.h>
#include <conio.h>

int large(int x[3][3]);

int main()
{
  int a[3][3], i, j;
  printf("Enter 9 numbers of matrix\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("The largest number is %d", large(a));

  return 0;
}

int large(int x[3][3])
{
  int temp = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (x[i][j] > temp)
      {
        temp = x[i][j];
      }
    }
  }
  return temp;
}