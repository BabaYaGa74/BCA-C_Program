#include<stdio.h>
int main(){
	int i,a[5];
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("The elements of array are: \n");
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
