// WAP to check whether the character is vowel or not
// variable = 1 (char), condition = 2
#include <stdio.h>
int main()
{
    char alphabet;
    printf("ENter character: ");
    scanf("%c", &alphabet);

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
    {
        printf("Character = %c is vowel\n", alphabet);
    }
    else
    {

        printf("Character = %c is consonant\n", alphabet);
    }
}

/*
1. WAP to accept a number and display value based on criteria
    a. if number is divisible by 5 -> BUZZ
    b. if number is divisible by 3 -> FIZZ
    c. if number is divisible by 3 and 5 both -> FIZZBUZZ
    d. if number is not divisible by any display -> number

2. WAP to accept character and display value based on criteria
    a. if chracter contains alphabets A-Z or a-z -> It is a character
    b. if chracter contains alphabets 0-9 -> It is a digit
    c. if character doesnot container alphabet or number -> It is a special symbol
*/