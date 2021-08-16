// WAP to read name, rollno and marks of 5 different students a s the three members of a structure name 'student'.
// Display the n ame and corresponding rollno and marks of the students sorted in
// an alphabetical order using user define function and display s orted data from main function. [10]

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student
{
    /* data */
    char name[20];
    int rollno;
    float marks;
};

void studentinfo(struct student s[5]);

int main()
{
    struct student s[5];
    int i;
    printf("Enter name , roll no and marks for 5 students \n");
    for (i = 0; i < 5; i++)
    {
        /* code */
        scanf("%s%d%f", &s[i].name, &s[i].rollno, &s[i].marks);
    }

    studentinfo(s);

    printf("Required answer is::  \n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%f \n", s[i].name, s[i].rollno, s[i].marks);
    }

    return 0;
}

void studentinfo(struct student s[5])
{
    struct student temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            /* code */
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
