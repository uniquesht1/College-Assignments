// 8. A file name employee.txt stores employee name, employee id and employee salary.
//     Write a program to display the detail of all employees in the order of their salary.

#include <stdio.h>
#include <conio.h>

struct employee
{
    char name[30];
    int id;
    float salary;
};

struct employee sorting(struct employee e[], int n);

int main()
{
    int n, i;
    printf("\nEnter the number of employee\n");
    scanf("%d", &n);
    struct employee e[n];

    printf("Enter the name \t id \t salary of %d people\n", n);

    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%s%d%f", &e[i].name, &e[i].id, &e[i].salary);
    }
    sorting(e, n);

    printf("name \tid \t salary ");
    for (i = 0; i < n; i++)
    {
        /* code */
        printf("\n%s\t%d\t%f", e[i].name, e[i].id, e[i].salary);
    }

    return 0;
}

struct employee sorting(struct employee e[], int n)
{
    struct employee temp;
    int i, j;
    // printf("\nEnter the number of employee again\n");
    // scanf("%d", &n);
    printf("the value is %d", n);
    for (i = 0; i < n; i++)
    {
        /* code */
        for (j = 0; j < n; j++)
        {
            /* code */
            if (e[i].salary > e[j].salary)
            {
                /* code */
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}