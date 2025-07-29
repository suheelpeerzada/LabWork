#include<stdio.h>
#define n 5
int sol[n];
int mat[n][n] = {{0,1,1,1,0}, 
					{1,0,1,1,0},
					{1,1,0,1,0},
					{1,1,1,0,1},
					{0,0,1,1,0}};

int adj(int source, int i){
	int j;
	if(mat[source][i] == 1){
		for(j=0; j<=source; j++){
			if(sol[j] == i)
				return 0;
		}
		return 1;
	}
	return 0;
}


void hamilcyc(int source){
	int i, l;
	for(i=0;i<n;i++){
		if(adj(source, i)){
			sol[source] = i;
			if(source == n-1){
				for(l=0;l<n;l++)
					printf("%d\t", sol[l]);
				printf("\n");
			}
			else hamilcyc(source+1);
		}
	}
}
int main(){
	int l, source = 0;
	
	for(l=0;l<n;l++)
	sol[l] = -1;
	
	sol[0] = 0;
	
	hamilcyc(source);
	return 0;
}
