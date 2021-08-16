// WAP in C to find all the possible roots of a quadratic equation ax^2 + bx + c = 0. 
// [8] [067][068][069] (Check answer: m^2-4m+4=0 =>2,2; m^2+m-2=0 =>1,-2; m^2+4m+5=0 => -2+1i, -2-1i)


#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b, c, rem, root1, root2, ans1, ans2;
    printf("Enter the value of a ,b and c\n");
    scanf("%f%f%f", &a, &b, &c);
    rem = (b * b) - 4 * a * c;

    if (rem == 0)
    {
        printf("The roots are of perfect square and has only one root");
        root1 = -b / (2 * a);
        printf("the root is %f", rem);
    }
    else if (rem > 0)
    {
        printf("The roots are real and has two roots");
        root1 = ((-b) + sqrt(rem)) / (2 * a);
        root2 = ((-b) - sqrt(rem)) / (2 * a);
        printf("the roots are %f and %f", root1, root2);
    }
    else if (rem < 0)
    {
        printf("The roots are imaginary and has two roots");
        ans1 = -b / (2 * a);
        ans2 = (sqrt(-rem)) / (2 * a);
        printf("the roots are %f+%fi and %f-%fi", ans1, ans2, ans1, ans2);
    }

    return 0;
}