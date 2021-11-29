#include<stdio.h>
int main(){
	int i,j,a[5];
	printf("Enter the elements of array:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("The reverse of an entered array is:\n");
	for(i=4;i>=0;i--){
		printf("%d\n",a[i]);
	}
	return 0;
}
