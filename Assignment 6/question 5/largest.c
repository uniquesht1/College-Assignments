/* 2. WAP to initialize nine values in 3x3 matrix, pass it to user define function.
 Find the largest element of 2D array and print it in main function. using pointer
 */
#include <stdio.h>
#include <conio.h>

int large(int *p);

int main()
{
  int a[3][3], i, j;
  int *p;
  p = &a[0][0];
  printf("Enter 9 numbers of matrix\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", (p + 3 * i + j));
    }
  }
  printf("The largest number is %d", large(p));

  return 0;
}

int large(int *p)
{
  int temp = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (*(p + 3 * i + j) > temp)
      {
        temp = *(p + 3 * i + j);
      }
    }
  }
  return temp;
}