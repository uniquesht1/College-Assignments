/* WAP to find factorial of a given number using function.

        - With return type with no argument */

#include <stdio.h>
#include <conio.h>

int fact();

int main()
{
    fact();
}

int fact()
{
    int n;
    int i, ans = 1;
    printf("Enter a number\n");
    scanf("%d", &n);

    
    for (i = n; i >= 1; i--)
    {
        ans = ans * i;
    }
    printf("The factorial of %d is %d", n, ans);
    return 0;
}