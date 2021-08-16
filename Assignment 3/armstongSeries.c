// WAP to find and print the Armstrong numbers in the range between two positive integer numbers given by the user.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n1, n2, i, j, count = 0, sum = 0, rem;
    printf("Enter the range (first number should be less than second number");
    scanf("%d%d", &n1, &n2);

    for (i = n1; i <= n2; i++)
    {
        j = i;

        while (j != 0)
        {
            count++;
            j = j / 10;
        }
        j = i;
        while (j != 0)
        {
            rem = j % 10;
            sum = sum + pow(rem, count);
            j = j / 10;
        }
        if (sum == i)
        {
            printf("%d, ", i);
        }
        count = 0;
        sum = 0;
    }
    return 0;
}