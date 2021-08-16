/* WAP to find factorial of a given number using function.

        - With return type with argument */

#include <stdio.h>
#include <conio.h>

int fact(int x);

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, fact(n));
    return 0;
}

int fact(int x)
{
    int i, ans = 1;
    for (i = x; i >= 1; i--)
    {
        ans = ans * i;
    }
    return ans;
}