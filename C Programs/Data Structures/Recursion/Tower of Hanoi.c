#include<stdio.h>

void tower(int, char, char, char);

void main(){
	int n;
	printf("Enter number of discs:\n");
	scanf("%d", &n);
	tower(n, 'a', 'c', 'b');
}

void tower(int n, char from, char to, char aux){
	if(n==1){
	printf("Move disc 1 from %c to %c\n", from, to);
	return;
}
	else{
		tower(n-1, from, aux, to);
		printf("Move disc %d from %c to %c\n", n, from, to);
		tower(n-1, aux, to, from);
	}
}