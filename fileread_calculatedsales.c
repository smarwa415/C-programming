//single line comment
//to read calculated sales
//multiline comment
//Author:marwa socrates makongo
//Reg NO.: BCS-05-0047/2025
//Date:31/10/2026
//Description: program file to read calculated salees
#include <stdio.h>

int main(void) {
    double amount;
    double totalSales = 0.0;
    FILE *file = fopen("sales.txt", "r");

    if (file == NULL) {
        perror("Could not open sales.txt");
        return 1;
    }

    while (fscanf(file, "%lf", &amount) == 1) {
        totalSales += amount;
    }

    if (ferror(file)) {
        perror("Error reading sales.txt");
        fclose(file);
        return 1;
    }

    fclose(file);

    printf("Total sales for the day: %.2f\n", totalSales);
    return 0;
}