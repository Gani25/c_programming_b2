// WAP to check whether the number is zero or non zero
// input = 1, conditions = 2

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Number = %d is a zero number\n");
    }
    else
    {
        printf("Number = %d is non zero number\n");
    }
}