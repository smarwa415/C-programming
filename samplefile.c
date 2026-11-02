//single line comment
//sample file
//multiline comment
//Author:marwa socrates makongo
//Reg NO.: BCS-05-0047/2025
//Date:2/11/2026
//Description: opening a file and writing in it
#include <stdio.h>
#include <stdlib.h>//exit()
int main()
{
	int num;
	FILE *fptr;
	fptr = fopen("C:\\Users\\Administrator\\Desktop\\files\\sample.txt","w");
	if (fptr==NULL){
		printf("Error opening the file \n");
	 
	exit(1);
}
	printf("Enter a random number");
	scanf("%d",&num);
	// write to file
	fprintf(fptr, "%d",num);
	fclose(fptr);
	return 0;
}