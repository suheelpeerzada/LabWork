//Pointers
#include<stdio.h>
#include<conio.h>
main(){
	int n=50, *p;
	
	printf("The value of N is: %d\n", n);
	printf("The address of N is: %d\n\n\n", &n);
	
	p=&n;
	
	printf("The value in pointer is: %d\n", p);
	printf("The value at address in pointer is: %d\n", *p);
	printf("The address pointer is: %d\n\n\n", &p);
}
