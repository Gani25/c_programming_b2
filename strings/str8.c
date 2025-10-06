// String functions
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "SPRK";
    char str2[10];

    strcpy(str2, str1);

    printf("String 2 = %s\n", str2);
    printf("String 1 Before Reverse = %s\n", str1);
    strrev(str1);
    printf("String 1 After Reverse = %s\n", str1);
}