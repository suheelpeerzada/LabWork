#include<stdio.h>

void main(){
	int a[3][3] = {{1,2,3},
				   {4,5,6},
				   {7,8,9}};
	int transpose[3][3] = {{0,0,0}, 
						   {0,0,0}, 
						   {0,0,0}};
	int i = 0, j = 0;
	printf("%d\n%d\n", a[0][1], a[1][0]);
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		transpose[j][i] = a[i][j];
		
	}
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
	printf("%d ", transpose[i][j]);
	if(j==2)
	printf("\n");
	}
}
