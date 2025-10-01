// WAP to accept 2 number and accept symbol (+,-,*,/) based on operation display answer
// input = 3, condition = 5
#include <stdio.h>
int main()
{
    float num1, num2, result;
    char operator;
    printf("Enter operator (+,-,*,/): ");
    scanf("%c", &operator);
    if (operator == '+' || operator == '-' || operator == '*' || operator == '/')
    {

        printf("Enter 2 number: ");
        scanf("%f%f", &num1, &num2);
        if (operator == '+')
        {
            result = num1 + num2;
            printf("The addition of %.2f, %.2f = %.2f", num1, num2, result);
        }
        else if (operator == '-')
        {
            result = num1 - num2;
            printf("The subtraction of %.2f, %.2f = %.2f", num1, num2, result);
        }
        else if (operator == '*')
        {
            result = num1 * num2;
            printf("The multiplication of %.2f, %.2f = %.2f", num1, num2, result);
        }
        else
        {
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("The division of %.2f, %.2f = %.2f", num1, num2, result);
            }
            else
            {
                printf("Cannot Divide By 0.\n");
            }
        }
    }
    else
    {
        printf("Invalid operator. Please select operator from above range.\n");
    }
}
/*
13. WAP to check whether the number is
    a. positive -> yes then check whether the number is even or odd
    b. negative
    c. zero
14. WAP to check whether the traingle is
    a. valid (all sides are positive) -> If valid triangle then check
        i. Equilateral Triangle (all sides are equal)
        ii. Isoceles Triangle (any 2 sides are equal)
        iii. Scalene Triangle (no sides are equal)
    b. not valid
15. Electric bill generator based on units consumption:
    a. units <=100 -> 5/unit
    b. units between 101 - 200 -> 7/unit
    c. units > 200 -> 10/unit
    Example: Unit = 250
    Amount = First 100 unit (100*5) + next 100 unit(100 * 7) + already 200 amount considered remaining 50 units (50 * 10)
            500+700+500 = 1700

*/