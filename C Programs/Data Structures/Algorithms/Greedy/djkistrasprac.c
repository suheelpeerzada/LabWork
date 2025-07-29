#include<stdio.h>

void djkistrasAlgo(int w[5][5], int n, int source){
	int stat[n], parent[n], q[n], key[n], i, j,u=0, k = 0, djk[5][5];
	for(i=0;i<n;i++){
		stat[i] = 1;
		parent[i] = -1;
		q[i] = i;
		key[i] = 500;
	}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++){
		djk[i][j] = -1;
	}
	key[source] = 0;
//	printf("Stat\tVertex\tParent\t\tWeight\n");
	while(k<=n){
		for(i=1;i<n;i++){
			for(j=0;j<i;j++){
				if(stat[i] == 1 && stat[j] == 1){
					if(key[i]>key[j]){
						u = j;
//						printf("\n\n%d----%d\n", stat[i], i);
//						printf("%d----%d\n\n", stat[j], j);
					}
				}
			}
		}
//		printf("%d ", u);
		
		stat[u] = 0;
		for(j=0;j<n;j++){
			if(w[u][j] != 0){
				if(key[j] > key[u] + w[u][j]){
					key[j] = key[u] + w[u][j];
					parent[j] = u;
				}
			}
		}
//		printf("%d\t%d\t%d\t\t%d\n",stat[k], q[k] ,parent[k], key[k]);
		k++;
	}
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(q[i] == parent[j])
				djk[i][j] = q[j];
		}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(djk[i][j] != -1)
			printf("%d -> %d\n", i, djk[i][j]);
		}
	}
	printf("\n\n");
	printf("Stat\tVertex\tParent\t\tWeight\n");
	for(i=0;i<n;i++){
		printf("%d\t%d\t%d\t\t%d\n",stat[i], q[i], parent[i], key[i]);
	}
}

int main(){
	int n = 5;
	int w[5][5] = {{0,35,22,0,0},{0,0,0,15,0},{0,19,0,34,17},{0,0,0,0,0},{31,0,0,26,0}};
	int source = 0;
	
	djkistrasAlgo(w, n, source);
	
	return 0;
}
