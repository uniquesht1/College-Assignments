// WAP to declare the structure student with member name and rollno. D
// eclare another structure dat e as the member of student with member day, month and year.
// Input the name, roll and date of birt h and display the records of 5 students. [10]

#include <stdio.h>
#include <conio.h>

struct date
{
    /* data */
    int yy, mm, dd;
};

struct student
{
    /* data */
    char name[20];
    int rollno;
    struct date dob;
};

int main()
{
    struct student s[5];
    int i;

    printf("Enter name , roll no , date of birth in format (yyyy mm dd) for 5 students\n");

    for (i = 0; i < 5; i++)
    {
        /* code */
        scanf("%s%d%d%d%d", &s[i].name, &s[i].rollno, &s[i].dob.yy, &s[i].dob.mm, &s[i].dob.dd);
    }

    printf("Required answer is : \n");

        for (i = 0; i < 5; i++)
    {
        /* code */
        printf("\n%s\t%d\t%d\t%d\t%d", s[i].name, s[i].rollno, s[i].dob.yy, s[i].dob.mm, s[i].dob.dd);
    }

    return 0;
}