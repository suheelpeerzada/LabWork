#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	int *p;
	int n = 5;
	int *q;
	
	p = (int *)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
		*(p+i) = 3;
	
	printf("%d\n", sizeof(p));
	
	for(i=0;i<n;i++)
	printf("%d ", *(p+i));
	
	q = realloc(p, n*6);
	
	for(i=0;i<10;i++)
		*(p+i) = 2;
		
	printf("\n%d\n", sizeof(p));
	
	for(i=0;i<n;i++)
	printf("%d ", *(p+i));
	
	return 0;
}
