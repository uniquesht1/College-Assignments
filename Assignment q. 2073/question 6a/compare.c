// Write a C program to read two strings in main and compare them using user defined function.. Display appropriate message from main.
#include <stdio.h>
#include <conio.h>

int strcompare(char *str1, char *str2);

int main()
{
    char string1[20], string2[20];
    int result;

    printf("Enter your first string\n");
    scanf("%s", string1);
    printf("Enter your second string\n");
    scanf("%s", string2);

    result = strcompare(string1, string2);

    if (result == 0)
    {
        /* code */
        printf("\nEntered strings are same\n");
    }
    else
    {
        printf("Entered strings are not same");
    }

    return 0;
}

int strcompare(char *str1, char *str2)
{
    for (int i = 0; *(str1 + i) != '\0'; i++)
    {
        if (*(str1 + i) != *(str2 + i))
        {
            /* code */
            return 1;
        }
    }
    return 0;
}
