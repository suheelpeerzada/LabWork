#include<stdio.h>

void main(){
	int a, x=0, temp;
	printf("Enter a number:\t");
	scanf("%d", &a);
	if(a<0){
		printf("Enter a positive number!\n");
		return;
	}
	temp =a;
	while(1){
		x = (x*10)+a%10;
		a/=10;
		if(a<1)
		break;
	}
	printf("%d\n", x);
	if(x == temp)
	printf("Number is palindrome!\n");
	else
	printf("Not palindrome!\n");
}
