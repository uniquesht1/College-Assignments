// WAP that evaluates area of circle using symbolic constant.

#include <stdio.h>
#include <conio.h>
#define PI 3.14
int main()
{
    float rad, area;
    printf("Enter a radius  of a circle\n");
    scanf("%f", &rad);
    area = PI * rad * rad;
    printf("the area  of a circle is %f",area);
    return 0;
}