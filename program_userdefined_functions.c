//single line comment
//program user defined
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:7/10/2026
Description: program that uses user defined
Version:
*/
#include <stdio.h>

// Function to calculate total marks
int calculateTotal(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}

// Function to calculate average mark
float calculateAverage(int total)
{
    return total / 3.0;
}

// Function to display pass/fail result
void displayResult(float average)
{
    if (average >= 50)
        printf("Pass/Fail result: Passed\n");
    else
        printf("Pass/Fail result: Failed\n");
}

int main()
{
    int mark1, mark2, mark3;
    int total;
    float average;

    // Ask the user to enter marks
    printf("Enter marks for subject 1: ");
    scanf("%d", &mark1);

    printf("Enter marks for subject 2: ");
    scanf("%d", &mark2);

    printf("Enter marks for subject 3: ");
    scanf("%d", &mark3);

    // Call the functions
    total = calculateTotal(mark1, mark2, mark3);
    average = calculateAverage(total);

    // Display results
    printf("\nTotal marks: %d\n", total);
    printf("Average mark: %.2f\n", average);

    displayResult(average);

    return 0;
}
