//single line comment
//water bill calculator
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:3/10/2026
Description: program that calculates water bill
Version:
*/
#include <stdio.h>

int main() {
    float units, bill;

    printf("Enter water units consumed: ");
    scanf("%f", &units);

    if (units <= 30) {
        bill = units * 20;
    }
    else if (units <= 60) {
        bill = (30 * 20) + ((units - 30) * 25);
    }
    else {
        bill = (30 * 20) + (30 * 25) + ((units - 60) * 30);
    }

    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}
