#include<stdio.h>
int main(){
	int i,j,a[10][10],row,column;
	printf("Enter the number of rows and columns:\n");
	scanf("%d%d",&row,&column);
	printf("Enter the elements of array1:\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The entered matrix is :\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The transpose of entered matrix is :\n");
	for(i=0;i<column;i++){
		for(j=0;j<row;j++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}	
	return 0;
}
