#include<stdio.h>
int main(){
	int i,j,a[1000],temp,n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The even numbers are:\n");
	for(i=0;i<n;i++){
			if(a[i]%2==0){
			printf("%d\n",a[i]);		
			}
		}
	printf("The odd numbers are:\n");
		for(i=0;i<n;i++){
				if(a[i]%2!=0){
				printf("%d\n",a[i]);	
				}
			}
		return 0;
}
