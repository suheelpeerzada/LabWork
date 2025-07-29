#include<stdio.h>
#define n 4
int mat[4][4] = {{0,1,1,0},{1,0,0,1},{1,0,0,1}, {0,1,1,0}};
int col[4] = {2,1,1,3};
int sol[4] = {0,0,0,0};


//int adj(int source){
//	int i;
//	for(i=0;i<n;i++){
//		if(mat[source][i] == 1)
//			return i+1;
//	}
//	return 0;
//}
void gcp(int source){
	int i,j, l;
//	printf("%d:\t", source);
			if(source == n-1){
				for(l=0;l<n;l++)
					printf("%d\t", sol[l]);
				printf("\n");
			}
	for(i=1;i<n;i++){
		if(mat[source][i] != 0 && col[source] != col[i]){
			sol[source] = i;
			if(source == n-1){
//				for(l=0;l<n;l++)
//					printf("%d\t", sol[l]);
				printf("\n");
			}
			else gcp(source+1);
		}
	}
}

int main(){
	int i;
	int source = 0;
	
	gcp(source);
	
//	for(i=0;i<n;i++)
//	printf("%d\t", sol[i]);
	return 0;
}
