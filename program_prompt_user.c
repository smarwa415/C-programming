//single line comment
//program wit user input
/* multiline comment
Author: marwa socrates makongo 
Reg NO.: BCS-05-0047/2025
Date: 17/9/2026
Description: program that prompts user to input details then display
Version: */
#include<stdio.h>
int main() {
	float Height ;
	int Phone_number;
	double Bank_balance;
	printf("Enter your height in centimeters\t");
	scanf("%f",&Height);
	printf("Enter your Phone number\t");
	scanf("%d",&Phone_number);
	printf("Enter your Bank balance in shillings\t");
	scanf("%lf",&Bank_balance);
	printf("Height is:%f\n",Height);
	printf("Phone number is:%d\n",Phone_number);
	printf("Bank balance is:ksh%lf\n",Bank_balance);
	return 0;
}
