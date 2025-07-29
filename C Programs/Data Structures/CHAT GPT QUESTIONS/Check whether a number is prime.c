#include<stdio.h>

void main(){
	int a, i, j, isPrime = 1;
	printf("Enter any number\n");
	scanf("%d", &a);
	for(i=2;i<a/2;i++){
		if(a%i==0){
			isPrime = 0;
			printf("Number is not Prime");
			return;
		}
	}
	if(isPrime == 1){
		printf("The number is Prime!\n");
	}
}
