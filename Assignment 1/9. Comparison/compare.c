// WAP to enter two numbers. Make comparison between them with conditional operator.
// If the first number is greater perform subtraction otherwise addition.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("Enter two numbers ");
    scanf("%d%d", &a, &b);
    a > b ? printf("the substraction of %d and %d is %d", a, b, a - b) : printf("the addition of %d and %d is %d", a, b, a + b);
    return 0;
}