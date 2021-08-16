// 2. WAP to represent complex number by a structure with real and imaginary as members.
//  Take 2 complex number as input from user into sturcture variable and
//  display a third complex number which is the multiplication of the entered complex numbers.
// Use user defined function to perform multiplication and display the result from another function display(). [10]

#include <stdio.h>
#include <conio.h>

struct complex
{
    /* data */
    int real;
    int img;
};

struct complex multiply(struct complex x, struct complex y);

void display(struct complex z);

int main()
{
    struct complex c1, c2, c3, c4;

    printf("Enter real and imaginary part of complex number c1\n");
    printf("real : ");
    scanf("%d", &c1.real);
    printf("img  : ");
    scanf("%d", &c1.img);
    fflush(stdin);
    printf("\nEnter real and imaginary part of complex number c2\n");
    printf("real : ");
    scanf("%d", &c2.real);
    printf("img  : ");
    scanf("%d", &c2.img);

    c4 = multiply(c1, c2);

    display(c4);
    return 0;
}

struct complex multiply(struct complex x, struct complex y)
{
    struct complex c3;
    c3.real = x.real * y.real - x.img * y.img;
    c3.img = x.real * y.img + x.img * y.real;
    return c3;
}

void display(struct complex z)
{
    printf("Requitred answer is %d + %di", z.real, z.img);
}
