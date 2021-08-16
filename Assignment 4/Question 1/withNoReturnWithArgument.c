/* WAP to find factorial of a given number using function.

        - With no return type with argument */

#include <stdio.h>
#include <conio.h>

void fact(int x);

void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("The factorial of %d is ", n);
    fact(n);
}

void fact(int x)
{
    int i, ans = 1;

    for (i = x; i >= 1; i--)
    {
        ans = ans * i;
    }
    printf("%d", ans);
}