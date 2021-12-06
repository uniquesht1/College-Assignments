// 2. WAP to initialize 9 values in 2D array and display the addresses and values of an array
// a) Using Normal method b) Using array name itself as pointer. c) Using pointer variable. [10]       

#include <stdio.h>
#include <conio.h>

int main()
{
  int a[3][3] = {11, 12, 13, 14, 15, 16, 17, 18, 19};
  int *p;
  p = a;

  printf("Normal Method\n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", a[i][j]);
      printf("%d\t", &a[i][j]);
    }
    printf("\n ");
  }

  printf("\n\nArray name pointer\n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", *(&a[0][0] + i * 3 + j));
      printf("%d\t", (&a[0][0] + i * 3 + j));
    }
    printf("\n ");
  }

  printf("\n\nPointer Variable\n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", *(p + i * 3 + j));
      printf("%d\t", (p + i * 3 + j));
    }
    printf("\n ");
  }

  return 0;
}