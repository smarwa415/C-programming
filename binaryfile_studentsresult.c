//single line comment
//students results binary file
//multiline comment
//Author:marwa socrates makongo
//Reg NO.: BCS-05-0047/2025
//Date:31/10/2026
//Description: binary file to store stdents results
#include <stdio.h>

typedef struct {
    char name[100];
    char registrationNumber[30];
    float totalMarks;
} Student;

int main(void) {
    Student student;
    FILE *file = fopen("C:\\Users\\Administrator\\Desktop\\files\\results.dat", "rb");

    if (file == NULL) {
        perror("Could not open results.dat");
        return 1;
    }

    printf("Student Name\tTotal Marks\n");
    printf("-------------------------------\n");

    while (fread(&student, sizeof(Student), 1, file) == 1) {
        printf("%s\t%.2f\n", student.name, student.totalMarks);
    }

    if (ferror(file)) {
        perror("Error reading results.dat");
        fclose(file);
        return 1;
    }

    fclose(file);
    return 0;
}