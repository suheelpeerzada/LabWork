#include<stdio.h>

int facto(int n){
	int fact;
	if(n==1)
	return 1;
	fact = n * facto(n-1);
	return fact;
}
main(){
	int a;
	printf("Enter no for which factorial is needed\n");
	scanf("%d", &a);
	if(a<0){
		printf("Factorial is only possible for non-negative integers!\n");
		return;
	}
	printf("Factorial is: %d", facto(a));
}
