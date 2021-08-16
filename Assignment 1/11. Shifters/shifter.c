// WAP to illustrate the use of shift operator in C program. (5<<2=>20, 5>>2=>1)

#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("The right shifters of %d is %d\n", a, a >> 2);
    printf("The left shifters of %d is %d\n", a, a << 2);

    return 0;
}

/*
    4 = 100.  -----> 1.00 ( right shift)
    4 = 100.  -----> 1000. ( left shift)

*/