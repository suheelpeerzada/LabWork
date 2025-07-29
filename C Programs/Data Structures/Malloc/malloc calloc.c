#include<stdio.h>
#include<stdlib.h>
void main(){
	int *p, *q, x, i;
	
	printf("Enter number of elements:\n");
	scanf("%d", &x);
	p= (int *)malloc(sizeof(int) * x);
	if(p==NULL){
		printf("Overflow!\n");
		return;
	}
	printf("Enter P elements\n");
	for(i=0; i<x; i++)
	{
	scanf("%d\n", (p+i));
}
	printf("P Elements are:\n");
	for(i=0;i<x;i++){
	printf("\tValue: %d\t", *(p+i));
	printf("\tAddress: %u\n", p+i);
}
free(p);
	/*q = (int *)calloc(sizeof(int),x);
	printf("Enter Q elements");
	for(i=0; i<x; i++){
	scanf("%d\n", q+i);
}
	printf("Q Elements are:\n");
	for(i=0;i<x;i++){
	printf("\tValue: %d\t", *(q+i));
	printf("\tAddress: %u\n", q+i);
}
free(q);*/
}
