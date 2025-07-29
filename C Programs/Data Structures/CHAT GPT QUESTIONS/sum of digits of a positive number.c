#include<stdio.h>

void main(){
	int a, sum=0;
	printf("Enter number:\t");
	scanf("%d", &a);
	if(a<0){
		printf("Enter a positive number");
		return;
	}
	while(1){
		sum += a%10;
		a/=10;
		if(a < 1)
		break;
	}
	printf("Sum is:\t%d", sum);
}
