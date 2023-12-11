//Write a Program to find the largest element from a given 2D array.
#include<stdio.h>
main(){
	
	int large,n,r,c,i,j;
	printf("Enter the size of row:");
	scanf("%d",&r);
	printf("Enter the size of coln:");
	scanf("%d",&c);
	
	int a[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	large=a[0][0];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(large<a[i][j]){
			large=a[i][j];
		}
		}
	}
	
	printf("The largest element : %d",large);
	
}
