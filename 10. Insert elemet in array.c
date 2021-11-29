#include<stdio.h>
int main(){
	int i,j,a[100],n,temp;
	n=5;
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the number of elements you want to insert: ");
	scanf("%d",&temp);
	printf("Enter those elements:\n");
	temp=temp+n;
	for(i=0;i<temp;i++){
		if(i>=n){
			scanf("%d",&a[i]);		
		}
	}
	printf("The total elements are:\n");
	for(i=0;i<temp;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
