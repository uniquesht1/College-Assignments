#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i - 1; j++)
        {
           putch(' ');
        }

        for (j = 5; j >= i; j--)
        {
          putch('*');
        }

        printf("\n");
    }

    return 0;
}