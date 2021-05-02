#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter a Character: ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("The entered character is vowel.");
	}
	else
	printf("The entered character is Consonant.");
	getch();
}
