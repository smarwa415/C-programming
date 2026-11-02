//single line comment
//writing a sentense in a file
//multiline comment
//Author:marwa socrates makongo
//Reg NO.: BCS-05-0047/2025
//Date:5/10/2026
//Description: program that allows you to enter a sentense in a file
#include <stdio.h>
#include <stdlib.h>//exit()
int main()
{
	char sentense[300];
	FILE *fptr;
	fptr = fopen("C:\\Users\\Administrator\\Documents\\sentense.txt","w");
	if (fptr==NULL){
		printf("Error opening the file \n");
	 
	exit(1);
}
	printf("Enter a sentense or paragraph");
	scanf("%s",&sentense);
	fgets(sentense, sizeof(sentense),stdin);
	// write to file
	fprintf(fptr, "This is the sentense: %s \n",sentense);
	fclose(fptr);
	return 0;
}