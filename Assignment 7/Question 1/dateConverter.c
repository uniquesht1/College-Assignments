// 1. Write a C program to convert date in B.S. to data in A.D. using structure. Use the data difference of current date.
// [Since there is no direct relation between B.S. to A.D. most of the time the answer will be incorrect.[10]

#include <stdio.h>
#include <conio.h>

int main()
{
    struct convert
    {
        /* data */
        int yyyy, mm, dd;
    };
    struct convert BS, AD;

    printf("Enter nepali datein format (yyyy-mm-dd)");
    scanf("%d%d%d", &BS.yyyy, &BS.mm, &BS.dd);

    if (BS.dd <= 16)
    {
        BS.dd = BS.dd + 30;
        BS.mm = BS.mm - 1;
    }
    if (BS.mm <= 8)
    {
        BS.mm = BS.mm + 12;
        BS.yyyy = BS.yyyy - 1;
    }
    AD.yyyy = BS.yyyy - 56;
    AD.mm = BS.mm - 8;
    AD.dd = BS.dd - 16;

    printf("\n required date in AD is %d-%d-%d ", AD.yyyy, AD.mm, AD.dd);
    return 0;
}