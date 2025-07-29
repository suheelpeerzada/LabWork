#include<stdio.h>
#include<stdlib.h>

void main(){
	int *p;
	int i, n;
	
	printf("Enter number of elements:\t");
	scanf("%d", &n);
	
	p = (int *)malloc(sizeof(int)*n);
	
	printf("Enter elements:\t");
	for(i=0;i<n;i++){
		scanf("%d", p+i);
	}
	printf("Elements are:\n");
	for(i=0;i<n;i++){
		printf("Values: %d\tAddress: %u\n", *p+i, p+i);
	}
	free(p);
}
