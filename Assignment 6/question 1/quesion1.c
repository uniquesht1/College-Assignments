// 1. WAP to initialize 5 values in 1D array and display the addresses and values of an array
// a) Using Normal method b) Using array name itself as pointer. c) Using pointer variable. [10]

#include <stdio.h>
#include <conio.h>

int main()
{
  int a[5] = {11, 12, 13, 14, 15};
  int *p;
  p = a;

  printf("Normal Method\n");

  for (int i = 0; i < 5; i++)
  {
    printf("%d ", a[i]);
    printf("%d\t", &a[i]);
  }

  printf("\n\nArray name pointer\n");

  for (int i = 0; i < 5; i++)
  {
    printf("%d ", *(a + i));
    printf("%d\t", (a + i));
  }

  printf("\n\nPointer Variable\n");

  for (int i = 0; i < 5; i++)
  {
    printf("%d ", *(p + i));
    printf("%d\t", (p + i));
  }

  return 0;
}