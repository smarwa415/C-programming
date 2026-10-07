//single line comment
//bank withdrawal with balance
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:5/10/2026
Description: program that lets you withdraw with 50000 balance
Version:
*/
#include <stdio.h>

int main() {
    float balance = 50000;
    float withdrawal;

    printf("Initial balance: KSh %.2f\n", balance);

    while (1) {
        printf("Enter withdrawal amount (0 to stop): ");
        scanf("%f", &withdrawal);

        if (withdrawal == 0) {
            printf("Transaction stopped.\n");
            break;
        }

        if (withdrawal > balance) {
            printf("Insufficient balance. Transaction stopped.\n");
            break;
        }

        balance = balance - withdrawal;

        printf("Remaining balance: KSh %.2f\n", balance);
    }

    return 0;
}
