//single line comment
//using built-in functions
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:7/10/2026
Description: program that computes using built-in functions
Version:
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double length, width, diagonal;

    //Prompt user to enter length and width
    printf("Enter the length of the window: ");
    scanf("%lf", &length);

    printf("Enter the width of the window: ");
    scanf("%lf", &width);

    //Calculate squares using pow()
    double lengthSquare = pow(length, 2);
    double widthSquare = pow(width, 2);

    //Calculate diagonal using sqrt()
    diagonal = sqrt(lengthSquare + widthSquare);

    //Display values to two decimal places
    printf("\nLength: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
