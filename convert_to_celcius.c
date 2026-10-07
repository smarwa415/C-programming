//single line comment
//converts to celcius
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:8/10/2026
Description: program that converts to celcius
Version:
*/
#include <stdio.h>

float convertToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

int main()
{
    float fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius = %.2f C\n", convertToCelsius(fahrenheit));

    return 0;
}
