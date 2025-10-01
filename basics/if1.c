// WAP to check whether the number is positive or negative
// Input -> 1, Conditions -> 2 if(condition) -- else
#include <stdio.h>
int main()
{
    int num; // variable declaration
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("Number = %d is a positive number\n", num);
    }
    else
    {
        printf("Number = %d is a negative number\n", num);
    }
}
