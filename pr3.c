#include<stdio.h>
main(){
	// Write a Program to find all the negative elements from a given 1D array.
	
int r,c,i,j;
	printf("Enter the size of row:");
	scanf("%d",&r);
	printf("Enter the size of coln:");
	scanf("%d",&c);
	
	int a[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Matrix before tranpose:\n");	
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			
			printf("%d ",a[i][j]);	
		}
		printf("\n");
	}
	
	printf("The transpose matrix of an array:\n");
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){	
			printf("%d ",a[j][i]);	
		}
		printf("\n");
	}
	}
	
