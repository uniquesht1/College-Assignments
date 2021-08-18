/* 5. Write syntax and example of following unformatted Input/Output function.
   i. getch()
  ii. getche()
 iii. getchar()
  iv. putch()
   v. putchar() */

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    printf("Enter any character: \n");
    ch = getche();
    printf("\n");
    putchar(ch);

}