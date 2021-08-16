// example of call y reference

#include <stdio.h>
#include <conio.h>

int sum(int *x, int *y);

int main()
{
    int a, b;
    printf("Enter two numebers\n");
    scanf("%d%d", &a, &b);
    printf("The sum of %d and %d is %d", a, b, sum(&a, &b));
    return 0;
}

int sum(int *x, int *y)
{
    return *x + *y;
}
