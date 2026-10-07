//single line comment
//allowed bank withrawal
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:3/10/2026
Description: program that allows withdrawal if balance above 0
Version:
*/
#include <stdio.h>

int main() {
    float balance, withdrawal;

    printf("Enter account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);

        balance = balance - withdrawal;

        printf("Balance: %.2f\n", balance);
    }

    return 0;
}
