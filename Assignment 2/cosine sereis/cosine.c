#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int i, n;
    float y = 1.0, x, sign = -1.0, fact = 1.0;
    printf("Enter the value of x and n\n");
    scanf("%f%d", &x, &n);

    x = (3.1415 / 180) * x;

    for (i = 1; 1 <= n; i++)
    {
        fact = fact * i;
        if (i % 2 == 0)
        {
            y = y + ((pow(x, i) / fact) * sign);
            sign = sign * -1;
        }
    }
    printf("the sum of the series is %f ", y);

    return 0;
}