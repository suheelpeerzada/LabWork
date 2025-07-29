#include<stdio.h>

void djkistrasAlgo(int w[5][5], int source, int n){
	float key[n];
	int parent[n], q[n], stat[n], u,i,j,k;
	for(i=0;i<n;i++){
		key[i] = 500;
		parent[i] = -1;
		q[i] = i;
		stat[i] = 1;
	}	
	i=0;
	key[source] = 0;
	while(i<=n){
		for(j=1;j<n;j++){
			for(k=0;k<j;k++){
				if(stat[j] == 1 && stat[k] == 1){
					if(key[j] > key[k]){
						u = k;
					}
				}
			}
		}
		stat[u] = 0;
		for(j=0;j<n;j++){
			if(w[u][j] != 0){
				if(key[j] > key[u]+w[u][j]){
					key[j] = key[u]+w[u][j];
					parent[j] = u;
				}
			}
		}
		i++;
	}
	printf("Shortest path is:\n");
		for(i=0;i<n;i++){
			printf("%d --> %d\t", parent[i], q[i]);
		}
}
void main(){
	int n = 5;
	int start;
	int w[5][5] = {{0,35,22,0,0},{0,0,0,15,0},{0,19,0,34,17},{0,0,0,0,0},{31,0,0,26,0}};
	
	djkistrasAlgo(w,0, n);
}
