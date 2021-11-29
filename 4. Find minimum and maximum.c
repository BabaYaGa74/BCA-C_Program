#include<stdio.h>
int main(){
	int num[1000],i,n,largest,smallest;
	printf("How many number?\n");
	scanf("%d",&n);
	printf("Enter %d numbers: \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	largest = num[0];
	smallest = num[0];
	for(i=0;i<n;i++){
		if(num[i]>largest){
			largest = num[i];
		}
		if(num[i]<smallest){
			smallest = num[i];
		}
	}
	printf("Maximum number is %d\nMinimum number is %d",largest,smallest);
}
