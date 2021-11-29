#include<stdio.h>
int main(){
	int i,n,a[5],num;
	printf("Enter the elements of array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to search: ");
	scanf("%d",&num);
	for(i=0;i<5;i++){
		if(a[i]==num){
			n=1;
			break;
		}
	}
	if(n==1){
		printf("The entered element %d is found in %d position.",num,i+1);
	}
	else{
		printf("The entered element is not found in an array.");
	}
	return 0;
}
