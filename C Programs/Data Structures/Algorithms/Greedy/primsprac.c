#include<stdio.h>


void primsAlgo(int w[6][6], int start, int n){
	int stat[n], u , i, j, k = n-1;
	int q[n], parent[5], key[n];
	
	for(i=0;i<n;i++){
		stat[i] = 1;
		q[i] = i;
		parent[i] = -1;
		key[i] = 500;
	}
	
	key[start] = 0;
	
	while(k>=0){
		u=501;
		for(i=0;i<n;i++){
			if(key[i] < u && stat[i] != 0)
//				if(){
					u = q[i];
//					printf("%d ", u);
//				}
		}
//		printf("\n%d ", key[u]);
		stat[u] = 0;
		for(j=0;j<n;j++){
				if(w[u][j] != 0 && w[u][j] < key[j])
					if(stat[j] != 0){
						key[j] = w[u][j];
						parent[j] = u;
					}
		}
		k--;
	}
	
	printf("Stat\tVertex\tParent\t\tWeight\n");
	for(i=0;i<n;i++){
		printf("%d\t%d\t%d\t\t%d\n",stat[i], q[i], parent[i], key[i]);
	}
}

int main(){
	int n = 6;
	int w[6][6] = { {0,31,42,0,0,0},
					{31,0,23,73,42,0},
					{42,23,0,51,0,0},
					{0,73,51,0,23,12},
					{0,42,0,23,0,65},
					{0,0,0,12,65,0}};
	int start = 0;
	
	primsAlgo(w, start, n);
	
	return 0;
}
