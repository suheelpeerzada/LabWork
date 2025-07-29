#include<stdio.h>

void floydwar(int cost[3][3], int n){
	int i, j, k, path[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++){
		path[i][j] = i;
	}
	for(k=0;k<n;k++){
		for(i=0;i<n;i++)
			for(j=0;j<n;j++){
				if(cost[i][k]+cost[k][j] < cost[i][j]){
					printf("%d changed to %d\n", cost[i][j], cost[i][k]+cost[k][j]);
					printf("%d ---> %d ----> %d\n", i, k, j);
					cost[i][j] = cost[i][k]+cost[k][j];
				}
				else{
					if(i != j)
					printf("%d ----> %d\n", i, j);
				}
			}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d\t", cost[i][j]);
		printf("\n");
	}
}

int main(){
	int cost[3][3] = {{0,4,11},
					  {6,0,2},
					  {3,999,0}};
	int n = 3;
	
	floydwar(cost, n);
	return 0;
}
