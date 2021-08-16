#include <stdio.h>

int main()
{
    int a[5] = {11, 12, 13, 14, 15};
    int *p = a;

    printf("%d \n", &a[0]);
    printf("%d \n", &a[1]);

    // printf("%d \n\n", a);
    // printf("%d \n", *(a + 1 * 2 + 1));
    // printf("%d \n\n", (a + 1 * 2 + 1));

    // printf("%d \n", p);
    // printf("%d \n", (a+1));
    return 0;
}