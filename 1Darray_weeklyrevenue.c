//single line comment
//1D Array 
//multiline comment
//Author:marwa socrates makongo
//Reg NO.: BCS-05-0047/2025
//Date:30/10/2026
//Description: 1D Array weekly revenue
//1D Array - Weekly Revenue Tracker

#include <stdio.h>

int main(int argc, char** argv)
{
	int i;
	int average_daily_revenue;
	
	int revenue[7];
	
	printf("     Weekly Revenue Tracker    \n\n");
	
	int total_weekely_revenue=0;
	
	for(i=0;i<7;i++)
	{
		printf("Enter revenue for day %d ", i+1);
		scanf("%d", &revenue[i]);	
		total_weekely_revenue=total_weekely_revenue+revenue[i];
		average_daily_revenue=total_weekely_revenue/7;
	}
	
	printf("\nThe tatol weekly revenue is %d", total_weekely_revenue);
	printf("\nThe average daily revenue is %d", average_daily_revenue);
	
		printf("\n");
	
	return 0;
}