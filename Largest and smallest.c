#include<stdio.h>
void main()
{
	int a,b,c,largest,smallest;
	printf("Enter any three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	largest=a>b?a:b;
	largest=largest>c?largest:c;
	printf("%d is the largest and ",largest);
	smallest = a<b?a:b;
	smallest = smallest<c?smallest:c;
	printf("%d is the smallest number among them.\n",smallest);
	
	if(largest%2==0)
	{
		printf("%d is Even number.\n",largest);
	}
	else
	printf("%d is Odd number.\n",largest);
	if(smallest%2==0)
	{
		printf("%d is Even number.\n",smallest);
	}
	else
	printf("%d is Odd number.\n",smallest);
}
