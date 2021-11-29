#include<stdio.h>
int main(){
	int i,j,n,a[500],count,f[500];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		f[i]= -1;
	}
	for(i=0;i<n;i++){
		count=1;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				count++;
				f[j]=0;
			}
		}
		if(f[i]!=0){
			f[i]=count;
		}
		else{
			count=1;
		}
	}
	printf("The entered elements with there frequency are:\n");
	for(i=0;i<n;i++){
		if(f[i]!=0)
		printf("Frequency of %d is %d\n",a[i],f[i]);
	}
	return 0;
}
