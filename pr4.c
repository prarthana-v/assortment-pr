//  Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
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
	
	int x,y;
	int sum=0,add=0;
	printf("Enter row number:");
	scanf("%d",&x);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==x){
				printf("%d ",a[x][j]);
				sum+=a[x][j];
			}			
		}
	}
	printf("\nSum of the elements of a row: %d",sum);
	
	printf("\nEnter cln number: ");
	scanf("%d",&y);
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(j==y){
				printf("%d ",a[i][y]);
				add+=a[i][y];
			}			
		}
	}
	printf("\nSum of the elements of a column: %d",add);
}
