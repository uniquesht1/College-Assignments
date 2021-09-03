// b) Write a program to read name and roll number of 48 students from user and store them in file.
// If the file already contains data, your program should add new data at the end of the file.

#include <stdio.h>
#include <conio.h>

#define len 2

struct data
{
    /* data */
    char name[20];
    int rollNo;
};

int main()
{
    FILE *fp;
    struct data students[len];

    fp = fopen("students.txt", "a+");
    if (fp == NULL)
    {
        /* code */
        printf("Failed to openthe file");
        return -1;
    }

    fseek(fp, 0, SEEK_END);

    printf("\neNTER TH ENAME AND THE ROLL NUMBER OF TWO STUDENTS");

    for (int i = 0; i < len; i++)
    {

        printf("\nS.N %d", i + 1);
        printf("\n NAME\n");
        scanf("%s", &students[i].name);
        printf("\n ROLL NO\n");
        scanf("%d", &students[i].rollNo);
        fprintf(fp, "%s %d\n", students[i].name, students[i].rollNo);
    }

    fclose(fp);
    return 0;
}