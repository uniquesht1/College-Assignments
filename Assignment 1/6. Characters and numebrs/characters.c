// Any character is entered through the keyboard. WAP to determine whether the character entered is capital letter, a small letter, a digits or special symbols.

#include <stdio.h>
#include <conio.h>

int main()
{
    char uni;
    printf("Enter a character\n");
    scanf("%c", &uni);

    if (uni >= 65 && uni <= 90)
    {
        printf("%c is Uppercase letter",uni);
    }
    else if (uni >= 97 && uni <= 122)
    {
        printf("%c is lowercase letter",uni);
    }
    else if (uni >= 47 && uni <= 68)
    {
        printf("%c is numbers",uni);
    }
    else
    {
        printf("%c is a special character",uni);
    }

    return 0;
}