
// 7. WAP to read numbers until user enters zero. Your program should display the
//  count of positive and negative numbers. After user enters zero display the counts. [5]

#include <stdio.h>
#include <conio.h>

int main()
{
  int n, positive = 0, negative = 0;
  printf("Enter any number and to end the programs type 0 and enter");
  do
  {
    scanf("%d", &n);
    if (n > 0)
    {
      positive++;
    }
    if (n < 0)
    {
      negative++;
    }
  } while (n != 0);
  printf("positive count == %d\n", positive);
  printf("negative count == %d", negative);

  return 0;
}