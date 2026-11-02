//single line comment
//student name and reg no entering into a file
//multiline comment
//Author:marwa socrates makongo
//Reg NO.: BCS-05-0047/2025
//Date:31/10/2026
//Description: program file to enter student name and registration number
#include <stdio.h>
#include <stdlib.h>//exit()
int main()
{
	char student_full_name [50];
	char registration_number[30];
	FILE *fptr;
	fptr = fopen("C:\\Users\\Administrator\\Documents\\student_details.txt","w");
	if (fptr==NULL){
		printf("Error opening the file \n");
	 
	exit(1);
}
	printf("Enter student full name");
	fgets(student_full_name, sizeof(student_full_name),stdin);
	printf("Enter registration number");
	fgets(registration_number, sizeof(registration_number),stdin);
	// write to file
	fprintf(fptr, "This is the full name: %s \n",student_full_name);
	fprintf(fptr,"This is the registration number:%s \n",registration_number);
	fclose(fptr);
	return 0;
}