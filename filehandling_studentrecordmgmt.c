//single line comment
//file handling
//multiline comment
//Author:marwa socrates makongo
//Reg NO.: BCS-05-0047/2025
//Date:8/11/2026
// program that stores and reyrieves students information in a text file

#include <stdio.h>   
#include <stdlib.h>  

void saveStudent();
void displayStudents();
void addStudent();

int main() {

    
    saveStudent();
    displayStudents();
    addStudent();
    displayStudents();

    return 0;
}

void saveStudent() {

    FILE *fp;
    char admission[50];
    char name[100];
    char course[100];

    fp = fopen("C:\\Users\\Administrator\\Desktop\\files\\students.txt", "w");

    if (fp == NULL) {
        printf("Error creating the file!\n");
        exit(1);
    }

    printf("Enter admission number:\n");
    fgets(admission, sizeof(admission), stdin);

    printf("Enter full name:\n");
    fgets(name, sizeof(name), stdin);

    printf("Enter course:\n");
    fgets(course, sizeof(course), stdin);

    fputs("Admission Number: ", fp);
    fputs(admission, fp);

    fputs("Full Name: ", fp);
    fputs(name, fp);

    fputs("Course: ", fp);
    fputs(course, fp);

    fputs("\n", fp);

    printf("Student record successfully saved!\n");

    fclose(fp);
}

void displayStudents() {

    FILE *fp;
    int ch;

    fp = fopen("C:\\Users\\Administrator\\Desktop\\files\\students.txt", "r");

    if (fp == NULL) {
        printf("Error opening the file!\n");
        exit(1);
    }

    printf("\n--- STUDENT RECORDS ---\n");
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }

    printf("\nFile successfully read!\n");

    fclose(fp);
}

void addStudent() {

    FILE *fp;
    char admission[50];
    char name[100];
    char course[100];

    fp = fopen("C:\\Users\\Administrator\\Desktop\\files\\students.txt", "a");

    if (fp == NULL) {
        printf("Error opening the file!\n");
        exit(1);
    }

    printf("\nEnter another student's admission number:\n");
    fgets(admission, sizeof(admission), stdin);

    printf("Enter full name:\n");
    fgets(name, sizeof(name), stdin);

    printf("Enter course:\n");
    fgets(course, sizeof(course), stdin);

    fputs("Admission Number: ", fp);
    fputs(admission, fp);

    fputs("Full Name: ", fp);
    fputs(name, fp);

    fputs("Course: ", fp);
    fputs(course, fp);

    fputs("\n", fp);

    printf("Student record successfully appended!\n");

    fclose(fp);
}
