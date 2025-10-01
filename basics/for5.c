// WAP to check whether the number is prime or not
// Prime num -> divisible by 1 and by itself

#include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // Asumming whatever input of n is a Prime number
    int prime = 0; // True
    int i;
    for (i = 2; i < n; i++)
    {
        // Is n divisible by i ?
        if (n % i == 0)
        {
            // means number is not a prime numebr
            prime = 1; // false
            break;
        }
    }
    if (prime == 0)
    {
        printf("Number = %d is a prime number", n);
    }
    else
    {
        printf("Number = %d is not a prime number", n);
    }
}