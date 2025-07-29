#include<stdio.h>
#include<stdlib.h>
void hanoi(int, char[], char[], char[]);
main(){
	int x, i=0;
	printf("Enter number of discs:\n");
	scanf("%d", &x);
	char start[20]="Start", aux[20]="Auxilliary", dest[20]="Destination";
	hanoi(x,start,aux,dest);
}
void hanoi(int x, char s[], char a[], char d[]){
	if(x==1){
		printf("move disk %d from %s to %s\n", x, s,d);
		printf("move disk %d from %s to %s\n", x, d,a);
		return;
	}
	else{
		hanoi(x-1,s,d,a);
		printf("move disk %d from %s to %s\n", x, s, a);
		printf("move disk %d from %s to %s\n", x-1, d,a);
		printf("move disk %d from %s to %s\n", x-1,a,s);
		printf("move disk %d from %s to %s\n", x,a,d);
		hanoi(x-1,a,s,d);
	}
}
