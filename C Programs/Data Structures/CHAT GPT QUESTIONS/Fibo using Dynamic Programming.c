//fibonacci using Dynamic Programming (Top-Down Method)
#include<stdio.h>

int table[50];

int fibo(int x, int n){
	if(x == 0){
		return n;
	}
	table[n] = table[n-1] + table[n-2];
//	printf("%d\n", table[n]);
	return fibo(x-1,n+1);
}
int main(){
	int x,n=2,i, result;
	printf("Enter upto which fibo is needed:\t");
	scanf("%d", &x);
	
	for(i=0;i<50;i++)
	table[i] = 0;
	
	table[0] = 0;
	table[1] = 1;
	
	result = fibo(x,n);
	
//	printf("Result:\t%d\n", table[result]);
	
	for(i=0;i<result;i++)
	printf("%d ", table[i]);
	
	return 0;
}
