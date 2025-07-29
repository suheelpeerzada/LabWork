//Prims Algorithm
#include<stdio.h>

void primsAlgo(int w[5][5], int start, int n){
	int stat_q[n], q[n], key[n], parent[n],i, j=0, u;
	for(i=0;i<n;i++){
		key[i] = 500;
		parent[i] = -1;
		stat_q[i] = 1;
		parent[i] = i;
		q[i] = i;
	}
	i=0;
	key[start] = 0;
	while(i<=n){
		u=501;
		for(j=0;j<n;j++)
			if(u > key[j] && stat_q[j] != 0)
			u = key[j];
		printf("%d\n", u);
		stat_q[u] = 0;
		for(j=0;j<n;j++){
			if(w[u][j] != 0){
				if(stat_q[j] != 0 && w[u][j] < key[j]){
					key[j] = w[u][j];
					parent[j] = u;
				}
			}
		}
		i++;
	}
	printf("Parent\t\tChild\n");
	for(i=0;i<n;i++){
		printf("%d\t-->\t%d\n", parent[i], q[i]);
	}
	printf("Stat\tVertex\tParent\t\tWeight\n");
	for(i=0;i<n;i++){
		printf("%d\t%d\t%d\t\t%d\n",stat_q[i], q[i], parent[i], key[i]);
	}
}
void main(){
	int n = 5;
	int start;
	int w[5][5] = {{0,2,3,0,0},
					{2,0,15,2,0},
					{3,15,0,0,13},
					{0,2,0,0,9},
					{0,0,13,9,0}};
	printf("Enter Starting Position: (1-5)\n");
	scanf("%d", &start);
	if(start <= 5)
	primsAlgo(w,start, n);
	else
	printf("Invalid input!\n");
}
