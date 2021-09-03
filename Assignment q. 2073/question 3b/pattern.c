// to print: without using formatted input or output
// Programming
// rogrammin
// ogrammi
// gramm
// ram
// a

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j;
    char string[11] = "Programming";
    for (i = 0; i < 11; i++)
    {
        /* code */
        for (j = i; j < 11 - i; j++)
        {
            /* code */
            putchar(string[j]);
        }
        putchar('\n');
    }

    return 0;
}