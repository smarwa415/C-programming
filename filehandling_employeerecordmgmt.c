//single line comment
//file handling
//multiline comment
//Author:marwa socrates makongo
//Reg NO.: BCS-05-0047/2025
//Date:9/11/2026
// program that stores and retrieves employee information in a text file

#include <stdio.h>   
#include <stdlib.h>  


void writeEmployee();
void readEmployee();
void appendEmployee();

int main() {

    
    writeEmployee();
    readEmployee();
    appendEmployee();
    readEmployee();

    return 0;
}

void writeEmployee() {

    FILE *fp;
    char id[50];
    char name[100];
    char department[100];

    fp = fopen("C:\\Users\\Administrator\\Desktop\\files\\employees.txt", "w");

    if (fp == NULL) {
        printf("Error creating the file (path)\n");
        exit(1);
    }

    printf("Enter employee identification number:\n");
    fgets(id, sizeof(id), stdin);

    printf("Enter employee full name:\n");
    fgets(name, sizeof(name), stdin);

    printf("Enter employee department:\n");
    fgets(department, sizeof(department), stdin);

    fputs("Identification Number: ", fp);
    fputs(id, fp);

    fputs("Full Name: ", fp);
    fputs(name, fp);

    fputs("Department: ", fp);
    fputs(department, fp);

    fputs("\n", fp);

    printf("Employee record successfully written to file!\n");

    fclose(fp);
}

void readEmployee() {

    FILE *fp;
    int ch;

    fp = fopen("C:\\Users\\Administrator\\Desktop\\files\\employees.txt", "r");

    if (fp == NULL) {
        printf("Error opening the file (path)!\n");
        exit(1);
    }

    printf("\n--- EMPLOYEE RECORDS ---\n");

    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }

    printf("\nFile successfully read!\n");

    fclose(fp);
}

void appendEmployee() {

    FILE *fp;
    char id[50];
    char name[100];
    char department[100];

    fp = fopen("C:\\Users\\Administrator\\Desktop\\files\\employees.txt", "a");

    if (fp == NULL) {
        printf("Error opening the file (path)!\n");
        exit(1);
    }

    printf("\nEnter another employee identification number:\n");
    fgets(id, sizeof(id), stdin);

    printf("Enter employee full name:\n");
    fgets(name, sizeof(name), stdin);

    printf("Enter employee department:\n");
    fgets(department, sizeof(department), stdin);

    fputs("Identification Number: ", fp);
    fputs(id, fp);

    fputs("Full Name: ", fp);
    fputs(name, fp);

    fputs("Department: ", fp);
    fputs(department, fp);

    fputs("\n", fp);

    printf("Employee record successfully appended to file\n");

    fclose(fp);
}
