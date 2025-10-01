// do while

#include <stdio.h>
int main()
{
    int i = 10;
    do
    {
        printf("Inside loop value of i = %d\n", i);
        i--;
    } while (i <= 1);

    printf("Outside loop value of i = %d\n", i);
    // int i = 10;

    // while (i <= 1)
    // {
    //     printf("Inside loop value of i = %d\n", i);
    //     i--;
    // }
    // printf("Outside loop value of i = %d\n", i);
}