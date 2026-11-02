//single line comment
//2D array 
//multiline comment
//Author:marwa socrates makongo
//Reg NO.: BCS-05-0047/2025
//Date:5/10/2026
//Description:2D array room occupancy
//2D Array - Room Occupancy

#include <stdio.h>

int main(int argc, char** argv)
{
	int occupancy[5][10];
	int i,j;
	
	printf("\n  ROOM OCCUPANCY \n");
	
	for(i=0;i<5;i++)
	{
		printf("\nFloor %d\n", i+1);
		for(j=0;j<10;j++)
		{
			printf("Enter the room %d occupancy(1=occupied, 0=vacant) ", j+1);
			scanf("%d",&occupancy[i][j]);
        }
	}
	
	printf("\n  ROOM RESULTS\n");
	
	for(i=0;i<5;i++)
	{
		int occupied=0;
		int vacant=0;
		for(j=0;j<10;j++)
		{
			if(occupancy[i][j]==1)
			{
				occupied++;
			}
			else
			{
				vacant++;
			}
		}
		
		printf("\nfloor %d ",i+1);
		printf("\nOccupied rooms %d", occupied);
		printf("\nVacant rooms %d", vacant);
	
	printf("\n");
	
	}
	
	return 0;
}