//single line comment
//exam eligibility
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:26/9/2026
Description: program that confirms exam eligibility
Version:
*/
#include <stdio.h>

int main() {
    float attendance, average;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &average);

    if (attendance >= 75 && average >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}
