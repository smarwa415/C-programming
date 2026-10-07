//single line comment
//calculateFare
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:8/10/2026
Description: program that calculates the fare
Version:
*/
#include <stdio.h>

int calculateFare(float distance)
{
    return distance * 50;
}

int main()
{
    float distance;

    printf("Enter distance in km: ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %d\n", calculateFare(distance));

    return 0;
}
