#include<stdio.h>
#define item 4
void z1knapsack(int c, int w[], int p[]){
	int y = 6;
	int x = 5;
	int sol[x][y];
	int i, j;
	for(i=0;i<x;i++)
		sol[i][0] = 0;
	for(j=0;j<y;j++)
		sol[0][j] = 0;
	for(i=1;i<x;i++)
		for(j=1;j<y;j++){
			if(j < w[i-1])
				sol[i][j] = sol[i-1][j];
			else{
				if(sol[i-1][j] > p[i-1]+sol[i-1][j-w[i-1]])
					sol[i][j] = sol[i-1][j];
				else
					sol[i][j] = p[i-1] + sol[i-1][j-w[i-1]];
			}
		}
	printf("Max profit: %d\n", sol[x-1][y-1]);
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("%d\t", sol[i][j]);
		}
		printf("\n");
	}
	while(i > 0 && j > 0){
		if(sol[i][j] != sol[i-1][j]){
			printf("%d Element Selected!\n", i);
			i--; j-=j-w[i-1];
		}
		else i--;
	}
}
int main(){
	int w[item] = {2,3,4,5};
	int p[item] = {3,4,5,6};
	int capacity = 5;
	
	z1knapsack(capacity, w,p);
	
	return 0;
}
