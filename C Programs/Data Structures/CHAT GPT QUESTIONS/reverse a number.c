#include<stdio.h>

void main(){
	int a, i;
	printf("Enter number:\t");
	scanf("%d", &a);
	
	while(1){
		printf("%d", a%10);
		a = a/10;
		if(a==0)
		break;
	}
}
