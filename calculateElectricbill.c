//single line comment
//calculateElectricbill
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:7/10/2026
Description: program that computes electric bill
Version:
*/
#include <stdio.h>

int calculateElectricBill(int units)
{
    int bill;

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else
    {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main()
{
    int units;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Total bill = KSh. %d\n", calculateElectricBill(units));

    return 0;
}
