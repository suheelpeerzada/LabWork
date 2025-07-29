#include<stdio.h>
int fibo(int, int, int);
main(){
	int n, a=0, b=1;
	printf("Enter total:\n");
	scanf("%d", &n);
	printf("%d%d", a,b);
	fibo(n-2,a,b);
}
int fibo(int n, int a, int b){
	if(n==0){
		return 0;
	}
	else{
		int z = a+b;
		a=b;
		b=z;
		printf("%d", z);
		z= fibo(n-1,a,b);
	}
}
