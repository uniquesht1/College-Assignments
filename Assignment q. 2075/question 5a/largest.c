// 5. a) Write a program that finds the largest word in a given sentence.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char words[1000][1000], large[1000], string[1000];
    int i = 0, j = 0, k, length;
    printf("Enter a sentence");
    gets(string);
     for (k = 0; string[k] != '\0'; k++)
    {
        if (string[k] != ' ' && string[k] != '\0')
        {
            words[i][j++] = string[k];
        }
        else
        {
            words[i][j] = '\0';
            i++;
            j = 0;
        }
    }
    length = i + 1;

    strcpy(large, words[0]);

    for (k = 0; k < length; k++)
    {
        if (strlen(large) < strlen(words[k]))
        {
            strcpy(large, words[k]);
        }
    }

    printf("Largest word ina  given sentence is %s"), large;

    return 0;
}