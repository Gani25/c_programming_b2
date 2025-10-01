// WAP To print first n natural number.
// 1 2 3 4 ... n
// start = 1, stop = n. gap = 1

#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("First %d natural numbers are:\n", n);

    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
}

/*
1. WAP to print first 10 even numbers
2. WAP to print cube of 1 to n
3. WAP to print first n natural number in reverse orders
*/