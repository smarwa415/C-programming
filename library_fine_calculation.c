//single line comment
//library fine calculation
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:26/9/2026
Description: program that calculates library fine overdue
Version:5
*/
#include <stdio.h>
int main() {
    int bookID;
    int dueDate;
    int returnDate;
    int daysOverdue;
    int fineRate;
    int fineAmount;

    printf("Enter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter Due Date: ");
    scanf("%d", &dueDate);

    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 7) {
        fineRate = 20;
    }
    else if (daysOverdue <= 14) {
        fineRate = 50;
    }
    else {
        fineRate = 100;
    }
    
    fineAmount = daysOverdue * fineRate;

    // Display results
    printf("\n--- Library Fine Details ---\n");
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d per day\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}