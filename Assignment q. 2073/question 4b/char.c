// b) Write a C program to display all characters between a given ranges.

#include <stdio.h>
#include <conio.h>

int main()
{
    int min, max, i;
    printf("Enter min and max range \n");
    scanf("%d%d", &min, &max);

    for (i = min; i <= max; i++)
    {
        /* code */
        printf("%c", i);
    }

    return 0;

}