//single line comment
//student marks
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:5/10/2026
Description: program that you input student marks and it grades
Version:
*/
#include <stdio.h>

int main() {
    int mark;
    char choice;

    do {
        do {
            printf("Enter student's mark (0-100): ");
            scanf("%d", &mark);

            if (mark < 0 || mark > 100) {
                printf("Invalid mark! Please enter a mark between 0 and 100.\n");
            }

        } while (mark < 0 || mark > 100);

        printf("Mark: %d\n", mark);

        if (mark >= 80)
            printf("Grade: A\n");
        else if (mark >= 70)
            printf("Grade: B\n");
        else if (mark >= 60)
            printf("Grade: C\n");
        else if (mark >= 50)
            printf("Grade: D\n");
        else
            printf("Grade: F\n");

        printf("Do you want to enter another student's mark? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
