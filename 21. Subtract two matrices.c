#include<stdio.h>
int main(){
	int i,j,a[2][2],b[2][2],c[2][2];
	printf("Enter the elements of array1:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements or array2:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		c[i][j]=a[i][j]-b[i][j];
	}
}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",c[i][j]);			
		}
		printf("\n");
	}	
	return 0;	
}
