#include<stdio.h>
int main(){
	int i,a[5],array[5];
	printf("Enter the Elements of Array1:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		array[i]=a[i];
	}
	printf("Elements of array 2 are: \n");
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
