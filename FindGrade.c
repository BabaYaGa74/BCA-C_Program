#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	printf("Enter your marks: \n");
	scanf("%d",&marks);
	if(marks<50){
		printf("Your Grade is F.\n");	
	}
	else if(marks>=50&&marks<60)
	{
		printf("Your grade is C.\n");
	}
	else if(marks>=60 && marks <70)
	{
		printf("Your grade is B.\n");
	}
	else if(marks>=70 && marks <80)
	{
		printf("Your grade is B+.\n");
	}
	else if(marks>=80 && marks <90)
	{
		printf("Your grade is A.\n");
	}
	else
	{
		printf("Your grade is A+.");
	}
}
