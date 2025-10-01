// WAP to check whether the year is a leap year or not
/*
1. Repeats after every 4 years
2. For century year
    a. Not all century year are leap year (year % 100 != 0)
    b. Century year which repeats after every 400 year is a leap year (year % 400 == 0)
*/

#include <stdio.h>
int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        printf("Year = %d is a leap year\n", year);
    }
    else
    {

        printf("Year = %d is not a leap year\n", year);
    }
}

/*
17. WAP to check profit or loss or no profit no loss
    profit -> +ve
    loss -> -ve
    no profit no loss -> 0
18. WAP to check greatest of 3 numbers or all are equal
19. WAP to check whether the number is
    a. divisible by 5 and 11 both
    b. only divisible by 5
    c. only divisible by 11
    d. not divisible by both
*/