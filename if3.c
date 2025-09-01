// WAP to check whether the number is divisible by 3 or not
// divisible by 3 means -> divide number by 3 and check remainder (%)
// if remainder == 0 -> then number is divisible by 3
// if remainder != 0 -> then number is not divisible by 3

// input = 1, conditions = 2
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num); // 12

    int remainder = num % 3; // remainder 12 % 3 -> 0

    if (remainder == 0)
    {
        printf("Number = %d is divisible by 3\n", num);
    }
    else
    {
        printf("Number = %d is not divisible by 3\n", num);
    }
}
// 1. WAP to check whether the number is even or odd.
// 2. WAP to check greatest of 2 numbers. (hint -> 2 input)
// 3. WAP to check eligible for vote or not by taking input of age