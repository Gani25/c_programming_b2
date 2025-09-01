// Convert degree celcius to Farenheit take input
//
// formula is F = (C * (9 / 5)) + 32
#include <stdio.h>
int main()
{
    int celcius;
    printf("Enter temperature in celcius: ");
    scanf("%d", &celcius);
    float farenheit = celcius * 9.0 / 5.0 + 32;
    printf("Temperature %d celcius in farenheit = %.1f\n", celcius, farenheit);
}
/*
1. Accept radius and display area and perimiter of circle
area = 3.14 * r * r
perimiter = 2 * 3.14 * r
2. Print area and volume of cylinder (input radius and height)
volume = pi * r * r * h
area = 2 * π * r * h + 2 * π * r * r
3. COnvert Farenheit to Celcius
C = (F − 32) × 5/9
*/