//single line comment
//data purchase
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:3/10/2026
Description: program that computes data purchase
Version:
*/
#include <stdio.h>

int main() {
    int choice;

    printf("Select data bundle:\n");
    printf("1. 100MB - 50 KES\n");
    printf("2. 500MB - 200 KES\n");
    printf("3. 1GB   - 350 KES\n");
    printf("4. 2GB   - 600 KES\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Selected bundle: 100MB\n");
            printf("Cost: 50 KES\n");
            break;

        case 2:
            printf("Selected bundle: 500MB\n");
            printf("Cost: 200 KES\n");
            break;

        case 3:
            printf("Selected bundle: 1GB\n");
            printf("Cost: 350 KES\n");
            break;

        case 4:
            printf("Selected bundle: 2GB\n");
            printf("Cost: 600 KES\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
