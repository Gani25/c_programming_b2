// Convert 28 degree celcius to Farenheit
// c = 28
// formula is F = (C * (9 / 5)) + 32
#include <stdio.h>
int main()
{
    int celcius = 28;
    float farenheit = celcius * 9.0 / 5.0 + 32;
    printf("Temperature %d celcius in farenheit = %f\n", celcius, farenheit);
    printf("Temperature %d celcius in farenheit = %.1f\n", celcius, farenheit);
}