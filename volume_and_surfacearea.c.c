//single line comment
//volume and surface area of a cylinder
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:17/9/2026
Description: program that promp user to enter dimensions and calculate volume and surface area
Version:3
*/
#include<stdio.h>
int main(){
	int radius ;
	int height;
	float pi= 3.142;
	float surface_area;
	float volume;
	printf("enter radius\t");
	scanf("%d",&radius);
	printf("enter height\t");
	scanf("%d",&height);
	surface_area = 2*pi*(radius*radius)+ 2*pi*radius*height;
	volume= pi*(radius*radius)*height;
	printf("surface area=%f\n",surface_area);
	printf("volume=%f\n",volume);
	return 0;
}
