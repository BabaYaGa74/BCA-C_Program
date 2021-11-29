#include<stdio.h>
int main()
{
	int i,a[1000],n,count=0,odd=0 ;
	printf("How many Numbers?\n");
	scanf("%d",&n);
	printf("Enter %d numbers: \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe required count of Even and Odd Numbers are: \n");
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			count++;
		}
		else{
			odd++;
		}
	}
	printf("Total Even number: %d\n",count);
	printf("Total Odd number : %d",odd);
	return 0;
}
