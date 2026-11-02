//single line comment
//file borrowed book
//multiline comment
//Author:marwa socrates makongo
//Reg NO.: BCS-05-0047/2025
//Date:31/10/2026
//Description: program file for library borrowing books
#include <stdio.h>

int main(void) {
    char title[200];
    FILE *file = fopen("C:\\Users\\Administrator\\Desktop\\files\\borrowed_books.txt", "a");

    if (file == NULL) {
        perror("Could not open borrowed_books.txt");
        return 1;
    }

    printf("Enter the borrowed book title: ");
    if (fgets(title, sizeof(title), stdin) == NULL) {
        fclose(file);
        return 1;
    }

    if (fprintf(file, "%s", title) < 0) {
        perror("Could not write to file");
        fclose(file);
        return 1;
    }

    fclose(file);
    printf("Book title stored successfully.\n");
    return 0;
}