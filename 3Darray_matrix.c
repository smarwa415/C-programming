//single line comment
//3D arrays
//multiline comment
//Author:marwa socrates makongo
//Reg NO.: BCS-05-0047/2025
//Date:31/10/2026
//Description: 3D array matrix
//Program: 3D Arrays

#include <stdio.h>

int main()
{
	int i,j,k;
	int marks[2][2][3]={
	{{1,2,3},{4,5,6}}, 
	{{10,20,30},{40,50,60}}
	};
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n");
			for(k=0;k<3;k++){
				printf("%d ", marks[i][j][k]);
			}
		
		} 
		printf("\n");
	}
			return 0;
}