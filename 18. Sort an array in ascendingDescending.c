#include<stdio.h>
int main(){
	int i,j,temp,a[1000],n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements of array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The elements in ascending order are:\n");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[j]<a[i]){
			temp = a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	printf("The elements in descending order are:\n");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[j]>a[i]){
			temp = a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;	
}
