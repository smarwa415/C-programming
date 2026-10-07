//single line comment
//prompt untill correct password
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:5/10/2026
Description: program that prompts untill correct password
Version:
*/
#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

    } while (password != 1234);

    printf("Access Granted\n");

    return 0;
}
