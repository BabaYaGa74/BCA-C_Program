#include<stdio.h>
int main(){
	int i,j,sum,a[2][2];
	printf("Enter the elements of matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		scanf("%d",&a[i][j]);	
		}
	}
	for(i=0;i<2;i++){
		sum=0;
		for(j=0;j<2;j++){
			sum=sum+a[i][j];
		}
		printf("The sum of elements in row %d is %d\n",i+1, sum);
	}
	
	for(i=0;i<2;i++){
		sum=0;
		for(j=0;j<2;j++){
			sum=sum+a[j][i];
		}
		printf("The sum of elements in column %d is %d\n",i+1,sum);
	}
}
