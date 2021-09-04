// Write a program to calculate the length of string without using string handling function.

#include <stdio.h>
#include <conio.h>

int main()
{
    char string[100], i;

    printf("\nEnter a string\n");
    scanf("%s", &string);

    for (i = 0; string[i] != '\0'; i++)
    {
        /* code */
    }
    printf("the length of a string is %d", i);

    return 0;
}