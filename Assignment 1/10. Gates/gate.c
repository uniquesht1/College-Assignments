// WAP to illustrate the operation of Bitwise AND (&), Bitwise OR (|), Bitwise XOR (exclusive OR) (^) operators. (4&5 <=> 100 & 101)

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("Enter two number\n");
    scanf("%d%d", &a, &b);
    printf("The Bitwise AND operation of %d and %d is %d\n\n", a, b, a & b);
    printf("The Bitwise OR operation of %d and %d is %d\n\n", a, b, a | b);
    printf("The Bitwise XOR operation of %d and %d is %d\n\n", a, b, a ^ b);

    return 0;
}

/*
    3 = 011
    4 = 100
    5 = 101
    ans =    001
*/