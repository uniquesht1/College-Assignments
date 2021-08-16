// 3. WAP to enter a number and find the sum of the series using recursive  function. 1+2+3+4+5+...+...n

#include <stdio.h>
#include <conio.h>

int sum(int x);

int main()
{
    int n;
    printf("Enter a number til where you want the sum of natural sereis\n");
    scanf("%d", &n);
    printf("The natural sum till %d is %d", n, sum(n));

    return 0;
}

int sum(int x)
{
    while (x!= 0)
    {
        return x + sum(x-1);
    }
    return 0;
}