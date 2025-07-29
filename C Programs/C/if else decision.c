#include<stdio.h>

void main(){
	int n;
	float r, l, b,a;
	while(1){
	printf("\nEnter 1 for circle and 2 rectangle:\t");
	scanf("%d", &n);
	switch(n){
	case 1:
		printf("Enter radius\n");
		scanf("%f", &r);
		a = r*r*3.14;
		printf("Area: %f", a);
		break;
	case 2:
		printf("Enter length and breadth:\t");
		scanf("%f%f", &l, &b);
		a = l*b;
		printf("Area: %f", a);
		break;
	default:
	printf("\nInvalid option!");
	break;
}}
}
