// Binary Operator
/*
operand1 (operator) operand2
operand means jiske upar operation perform hoga
*/
/*
Arithmatic Operator -> (Values)
* -> Multiply
/ -> Divide (Quotient)
% -> Modulus (Remainder)
+ -> Addition
- -> Subtraction
*/

#include <stdio.h>
int main()
{
    // variable initialization
    int a = 23;
    int b = 4;
    // empty -> Variable Declaration
    int result;

    // 23 * 4
    result = a * b;
    printf("%d * %d = %d\n", a, b, result);

    // 23 / 4 -> Quotient -> 5
    result = a / b;
    printf("%d / %d = %d\n", a, b, result);
    printf("Division of %d, %d = %d\n", a, b, result);

    // 23 % 4 -> Remainder -> 3
    result = a % b;
    printf("Remainder of %d, %d = %d\n", a, b, result);

    // Add and subt on own
    // 23 + 4
    result = a + b;
    printf("Addition of %d, %d = %d\n", a, b, result);
}

// Convert 28 degree celcius to Farenheit
// c = 28
// formula is F = (C * (9 / 5))