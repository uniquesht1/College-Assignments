// 3. Write a program using pointer to swap the value of two variables where
// the swapping operations is performed in separate function. [6] [

#include <stdio.h>
#include <conio.h>

void swap(int *p);

int main()
{
    int a[2];
    int *p;
    p = a;

    printf("Enter two numbers for a and b\n");
    printf("a = ");
    scanf("%d", (p));
    printf("b = ");
    scanf("%d", (p + 1));
    printf("\ntwo numbers before swap :");
    printf("\na :: %d", *p);
    printf("\nb :: %d", *(p + 1));
    swap(p);
    printf("\n\ntwo numbers after swap :");
    printf("\na :: %d", *p);
    printf("\nb :: %d", *(p + 1));
    return 0;
}

void swap(int *p)
{
    int temp;
    temp = *p;
    *p = *(p + 1);
    *(p + 1) = temp;
}
