// Iterating over string with loop

#include <stdio.h>

int main()
{
    char str[] = "ABDUL GANI";

    int i = 0;
    while (str[i] != '\0')
    {
        printf("Character at %d is %c\n", i, str[i]);
        i++;
    }
}
// WAP to check whetehr the string is palindrome or not without using any functions
// BOB -> Rev -> BOB (Palindrome)
// SPRK -> Rev -> KRPS (Not Palindrome)