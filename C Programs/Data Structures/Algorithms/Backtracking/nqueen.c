#include<stdio.h>

int x[4];

int abs(int o){
	if(o<0){
		o *= -1;
		printf("O < 0 : %d\n", o);
		return o;
	}
	printf("O > 0 : %d\n", o);
	return o;
}

int place(int k, int i){
	int j;
	for(j=0;j<k-1;j++){
		if(x[j] == i || abs(x[j]-i) == abs(j-k)){
			return 0;
		}
	}
	return 1;
}

void nqueen(int k, int n){
	int i, l;
	for(i=0;i<n;i++){
		if(place(k,i)){
			x[k] = i;
			if(k==n-1){
				printf("\n");
				for(l=0;l<n;l++)
					printf("%d\t", x[l]);
			}
			else{
				for(i=0;i<n;i++)
					x[i] = -1;
				nqueen(k+1, n);
			}
		}
	}
}
int main(){
	int k = 0;
	int n = 4;
	int i;
	nqueen(k,n);
	
	return 0;
}
