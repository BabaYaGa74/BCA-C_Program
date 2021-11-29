#include<stdio.h>
int main(){
	int i,a[50],count=0;
	printf("Enter the elements of the array:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]%5==0 && a[i]>15){
			count++;
		}
	}
	printf("The number of elements divisible by 5 and greater than 15 are %d",count);
	return 0;
}
