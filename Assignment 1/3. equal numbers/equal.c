// WAP to enter numbers and check whether they are exactly equal or not.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("Enter two number\n");
    scanf("%d%d" ,&a, &b);
    if (a == b)
    {
        printf("They are equal numbers");
    }
    else
    {
        printf("They are not equal numbers");
    }
    return 0;
}