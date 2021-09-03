// WAP to add two numbers given by user.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers to add\n");
    scanf("%d%d", &a, &b);
    printf("The addition of %d and %d is %d", a, b, a + b);
    return 0;

}