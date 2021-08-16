#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int i, j;
    char a[8] = {"PULCHOWK"};
    for (i = 0; i <= 7; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i % 2 == 0 && j % 2 != 0)
            {
                printf("%c", a[j] + 32);
            }
            else
            {
                printf("%c", a[j]);
            }
        }
        printf("\n");
    }
    return 0;
}