#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is the largest number", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the largest number", b);
    }
    else if (c > b && c > a)
    {
        printf("%d is the largest number", c);
    }
    return 0;
}