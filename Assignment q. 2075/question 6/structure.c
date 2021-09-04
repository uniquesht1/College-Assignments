//6. What is structure? Why is it necessary? Write a program to add two distances given in feet and inch format using structure.

#include <stdio.h>
#include <conio.h>

struct distance
{
    /* data */
    int feet;
    float inch;
} d1, d2, result;

int main()
{
    //first distance
    printf("Enter the first distance");
    printf("Enter feet");
    scanf("%d", &d1.feet);
    printf("Enter inch");
    scanf("%f", &d1.inch);

    // second distance
    printf("Enter the second distance");
    printf("\nEnter feet");
    scanf("%d", &d2.feet);
    printf("\nEnter inch");
    scanf("%f", &d2.inch);

    //adding
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    while (result.inch >= 12)
    {
        /* code */
        result.inch = result.inch - 12;
        result.feet++;
    }

    printf("\n sum of the distances are %d feet and %f inch", result.feet, result.inch);
    return 0;
}