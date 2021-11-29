#include<stdio.h>
int main(){
	int i,j,a[1000],n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements of array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The original array is:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nArray of even elements:\n");
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%d ",a[i]);
		}
	}
	printf("\nArray of Odd elements:\n");
		for(i=0;i<n;i++){
		if(a[i]%2!=0){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
