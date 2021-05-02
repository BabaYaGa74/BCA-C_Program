#include<stdio.h>
#include<conio.h>
int main()
{
	float unit,runit,charge,total;
	printf("Enter the units: ");
	scanf("%f",&unit);
	if(unit<=50)
	{
		total = unit*0.50;
	
	}
	else if(unit>50 && unit<=150)
	{
		runit=unit-50;
		total=50*0.50+runit*0.75;
	}
	else if (unit>150 && unit<=250)
	{
		runit=unit-150;
		total = 50*0.50+100*0.75+runit*1.20;
		}
	else
	{
		runit= unit-250;
		total=50*0.50+100*0.75+100*1.20+runit*1.50;

	}
		charge = total+ 0.2 * total;
		printf("The required bill is Rs.%.2f",charge);
	return 0;
}
