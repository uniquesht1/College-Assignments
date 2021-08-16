/* WAP to find factorial of a given number using function.

        - With no return type with no argument */

#include <stdio.h>
#include <conio.h>

void fact();

void main()
{

    fact();
}

void fact()
{
    int i, ans = 1;
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        ans = ans * i;
    }
    printf("The factorial of %d is %d", n, ans);
}