#include<stdio.h>
#include<math.h>

void main(){
	int a,sum=0, t, k, iteration = 0, i=0;
	printf("Enter number:\t");
	scanf("%d", &a);
	if(a<0){
		printf("Enter a positive number\n");
		return;;
	}
	t=a;
	while(1){
		iteration++;
		a = a/10;
		if(a<1)
		break;
	}
	a=t;
	while(i<iteration){
		sum  += pow(a%10,iteration);
		a/=10;
		if(a<1)
		break;
		i++;
	}
	if(sum == t)
		printf("Given number is an Armstrong Number.\n");
	else
	printf("Given number is not an armstrong number\n");
}
