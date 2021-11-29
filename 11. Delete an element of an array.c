#include<stdio.h>
int main(){
	int i,n,a[5];
	printf("Enter the elements of Array: \n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the index number: ");
	scanf("%d",&n);
	for(i=0;i<5;i++){
		if(i==n){
			a[n]=0;
		}
		printf("%d\n",a[i]);
	}
	return 0;
}
