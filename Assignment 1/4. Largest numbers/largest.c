// WAP to find a larger number among two numbers.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("%d is greater than %d", a, b);
    }
    else
    {
        printf("%d is greater than %d", b, a);
    }

    return 0;
}