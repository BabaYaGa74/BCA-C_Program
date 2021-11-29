#include<stdio.h>
int main(){
	int i,a[5];
	printf("Enter the elements of Array:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("The elements of array are:\n");
	for(i=0;i<5;i++){
		if(a[i]<0){
			printf("%d\n",a[i]);
		}
	}
	return 0;
}
