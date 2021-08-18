// 9. Write a program to read a 3x3 square matrix, pass it to user define function,
// find minimum integer value of a matrix, replace the diagonal elements by the minimum
// element and display it using pointer from main function. [5]

#include <stdio.h>
#include <conio.h>

int square(int *p);

int main()
{
    int a[3][3], i, j, *p = &a[0][0];
    printf("Enter 9 elements of a matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            /* code */
            scanf("%d", (p + i * 3 + j));
        }
    }

    square(a);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(p + i * 3 + j));
        }
        printf("\n");
    }

    return 0;
}

int square(int *p)
{
    int temp = *p;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (*(p + i * 3 + j) < temp)
            {
                temp = *(p + i * 3 + j);
            }
        }
    }

    printf("smallest value is %d\n", temp);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j || i + j == 2)
            {
                *(p + i * 3 + j) = temp;
            }
        }
    }
    return 0;
}