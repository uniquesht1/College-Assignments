//  Write a program to check whether a given number is Armstrong number or not using recursive function.

#include <stdio.h>
#include <math.h>

int armstrong(int x, int y);

int main()
{
    int n, result, temp, c = 0;
    ;

    printf("Enter a number\n");
    scanf("%d", &n);

    temp = n;

    for (int i = 0; temp != 0; i++)
    {
        /* code */
        temp = temp / 10;
        c++;
    }
    result = armstrong(n, c);
    printf("\n%d\n", result);
    if (result == n)
    {
        /* code */
        printf("%d Armstrong number", n, result);
    }
    else
    {
        printf("%d %d Not Armstrong number", n, result);
    }

    return 0;
}

int armstrong(int x, int y)
{
    int sum = 0, temp;
    if (x != 0)
    {
        temp = pow((x % 10), y);
        x = x / 10;
        sum = temp + armstrong(x, y);
    }
    else
    {
        return sum;
    }
}