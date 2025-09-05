// WAP to print table of 6 till 10 iteration
/*
6 * 1 = 6
6 * 2 = 12
    .
    .
    .
6 * 10 = 60
*/

#include <stdio.h>
int main()
{
    int i = 1, table;
    while (i <= 10)
    {
        table = 6 * i;
        printf("6 * %d = %d\n", i, table);
        i++;
    }
}
/*
1. WAP to print sum of 1 to n
2. WAP to print sum of only first 10 odd numbers
3. WAP to print table of n till x iteration
    Ex: n = 5, x = 6
    5 * 1 = 5
    5 * 2 = 10
        .
        .
        .
    5 * 6 = 30
4. WAP to print FIZZBUZZ based on below criteria
    a. If number is divisible by 3 and 5 both -> Print FIZZBUZZ
    b. If number is divisible by 3 -> Print FIZZ
    c. If number is divisible by 5 -> Print BUZZ
    d. If number is not divisible by any -> Print number
*/