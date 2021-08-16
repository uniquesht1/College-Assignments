    // WAP to enter two numbers and display the largest number using ternary operator

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("Enter two number\n");
    scanf("%d%d", &a, &b);
    a>b? printf("%d is greater number",a) : printf("%d is greater number",b);
    return 0;
}