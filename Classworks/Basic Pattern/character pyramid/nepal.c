#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, k, m;
    char nepal[6] = {" NepaL"};
    for (i = 0; i < 6; i++)
    {

        for (k = 1; k <= 6 - i; k++)
        {
            putch(' ');
        }
        for (m = 0; m < ((2 * i) - 1); m++)
        {
            printf("%c", nepal[i]);
        }

        printf("\n");
    }

    return 0;
}

/*
    N
   eee
  ppppp
 aaaaaaa
LLLLLLLLL





#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, k, m;
    char nepal[7] = {"NepaL"};
    for (i = 0; i < 7; i++)
    {

        for (k = 0; k < 7 - i; k++)
        {
            putch(' ');
        }
        for (m = 0; m < ((2 * i) + 1); m++)
        {
            printf("%c", nepal[i]);
        }

        printf("\n");
    }

    return 0;
}



*/