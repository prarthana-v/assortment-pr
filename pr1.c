#include<stdio.h>
main(){
	// Write a Program to find all the negative elements from a given 1D array.
	
	int n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter array's elements : \n");
	for(i=0;i<n;i++){
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Negative elements from an Array : \n");
	for(i=0;i<n;i++){
		if(a[i]<0){
			printf("%d\n",a[i]);	
		 }
		}
	}

