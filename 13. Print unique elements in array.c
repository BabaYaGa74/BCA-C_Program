#include<stdio.h>
int main(){
	int i,j,a[1000],f[1000],count,n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		count=1;
		if(a[i]!=0){
		for(j=i+1;j<n;j++){
			if(a[j]==a[i]){
				count++;
				a[j]=0;
			}
		}
	f[i]=count;
	}
}
	printf("The unique elements are:\n");
	for(i=0;i<n;i++){
		if(a[i]!=0 && f[i]==1){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
