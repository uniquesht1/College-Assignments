// 8. Write a program to calculate sum of digits of a given 5-digits number entered by the user using recursive function. [5]

#include <stdio.h>
#include <conio.h>

int add(int x); //prototype

int main()
{
    int n, result;
    printf("Enter any 5 digit number\n");
    scanf("%d", &n);
    result = add(n);
    printf("sum of digits is == %d", result);
    return 0;
}

int add(int x)
{
    static int rem, sum = 0;
    if (x == 0)
    {
        /* code */
        return sum;
    }
    else
    {
        rem = x % 10;
        sum = rem + sum;
        x = x / 10;
    }
    add(x);
}