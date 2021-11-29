#include<stdio.h>
int main(){
	int i,j,largest,a[10],secondLargest;
	printf("Enter the elements of array:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	largest =a[0];
	for(i=0;i<5;i++){
			if(a[i]>largest){
				secondLargest = largest;
				largest=a[i];
			}
		}
	printf("The second Largest among them is: %d",secondLargest);
	return 0;
	}

