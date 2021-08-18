// 10. Write a program in C to read name, age and salary of 5 different employees as
//  the three members of a structure named as “employee”.  Sort this data in salaru
//   basis using user defined function and display sorted data from main function. [5]

#include <stdio.h>
#include <conio.h>

struct employee
{
    char name[20];
    int age;
    int salary;
};

struct employee sorting(struct employee e[]);

int main()
{
    struct employee e[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%s%d%d", &e[i].name, &e[i].age, &e[i].salary);
    }

    sorting(e);

    printf("Salary based ascending order\n");

    printf("Name\tAge\tSalary\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%d\n", e[i].name, e[i].age, e[i].salary);
    }

    return 0;
}

struct employee sorting(struct employee e[])
{
    int i, j;
    struct employee temp;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (e[i].salary < e[j].salary)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}
