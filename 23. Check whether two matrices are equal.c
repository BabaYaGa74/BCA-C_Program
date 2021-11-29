#include<stdio.h>
int main(){
	int i,j,a[2][2],b[2][2],equal;
	printf("Enter the elements of array1:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements or array2:\n");
	equal =1;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(a[i][j] != b[i][j]){
				equal = 0;
				break;
			}
		}
	}
	if(equal == 1){
		printf("The entered arrays are equal.");
	}
	else{
	printf("The entered arrays are not equal.");	
	}
	
	return 0;
}
