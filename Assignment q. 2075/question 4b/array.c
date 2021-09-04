// Write the program to pass an array to function and sort them in ascending.

#include <stdio.h>
#include <conio.h>

void sorting(int *p);
void display(int *p);

int main()
{
    int a[5], i;
    int *p;
    p = &a[0];

    printf("Enter any five numbers\n");
    for (i = 0; i < 5; i++)
    {
        /* code */
        scanf("%d", (p + i));
    }

    sorting(p);
    display(p);

    return 0;
}

void sorting(int *p)
{
    int i, j, temp;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            /* code */
            if (*(p + i) < *(p + j))
            {
                /* code */
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

void display(int *p)
{
    int i;
    printf("\nIn ascending order \n");
    for (i = 0; i < 5; i++)
    {
        /* code */
        printf("%d,\t", *(p + i));
    }
}
