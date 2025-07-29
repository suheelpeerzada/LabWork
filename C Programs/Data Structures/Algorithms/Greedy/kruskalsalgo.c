#include<stdio.h>

void kruskalsalgo(int w[6][6], int n){
	int i,j,k=n-1, u = 50, x, y, smallest = 999;
	int stat[n][n], buf[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			stat[i][j] = 1;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			buf[i][j] = 0;
	while(k>=0){
		for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(w[i][j] < u && stat[i][j] != 0 && w[i][j] < smallest){
				x = i;
				y = j;
				smallest = w[i][j];
			} 
		}
		buf[x][y] = w[x][y];
		stat[x][y] = 0;
		k--;
	}
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			printf("%d ", w[i][j]);
		}
		printf("\n");
	}
	printf("\n\nParent\t\tChild\n\n");
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
//			if(buf[i][j]!=0){
//				printf("%d\t\t%d\n", j, i);
//			}
			printf("%d ", buf[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int w[6][6] = {{0,5,3,0,0,7},
				   {5,0,6,2,4,0},
				   {3,6,0,3,0,8},
				   {0,2,3,0,2,0},
				   {0,4,0,2,0,0},
				   {7,0,8,0,0,0}};
	
	kruskalsalgo(w, 6);
	
	return 0;
}
