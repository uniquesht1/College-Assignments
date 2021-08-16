// WAP to perform addition, subtraction, multiplication and division as per user choice .

#include <stdio.h>
#include <conio.h>

int main()
{
    int choice;
    float a, b;
    printf("Enter two numbers\n");
    scanf("%f%f", &a, &b);

    printf("Enter your choice\n");
    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n\n");

    fflush(stdin);

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("The addition is %f ", a + b);
        break;
    case 2:
        printf("The subtraction is %f ", a - b);
        break;
    case 3:
        printf("The multiplication is %f ", a * b);
        break;
    case 4:
        printf("The division is %f ", a / b);
        break;
    default:
        printf("Invalid choice");
    }
    return 0;
}