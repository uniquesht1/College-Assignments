// b) What are overflow and underflow errors in context of array?
// Write a program to add corresponding elements of two arrays. The results should form a new array.

#include <stdio.h>
#include <conio.h>

int main()
{
    int len;

    printf("Enter the length of an arrary is :\n");
    scanf("%d", &len);

    int arr1[len], arr2[len], arr3[len];

    printf("\nEnter the value of first arrary :\n");

    for (int i = 0; i < len; i++)
    {
        /* code */
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the value of second arrary :\n");
    for (int i = 0; i < len; i++)
    {
        /* code */
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < len; i++)
    {
        /* code */
        arr3[i] = arr1[i] + arr2[i]; //addition of two corresconding array
    }

    printf("\nThe final result is : \n ");

    for (int i = 0; i < len; i++)
    {
        /* code */
        printf("%d ", arr3[i]);
    }

    return 0;
}