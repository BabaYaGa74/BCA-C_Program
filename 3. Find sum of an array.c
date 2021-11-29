#include<stdio.h>
int main(){
	int i,a[5],sum=0;
	printf("Enter the elements of Array: \n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+a[i];
	}
	printf("The sum is: %d",sum);
	return 0;
}
