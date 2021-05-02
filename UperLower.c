#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	int cH;
	printf("Enter any character: ");
	scanf("%c",&ch);
	if(ch>64 && ch<91){
	cH=ch+32;
	}
	else
	cH=ch-32;
	printf("%c",cH);
}
