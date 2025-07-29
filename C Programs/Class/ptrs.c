#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p,*q, n, i;
	printf("Enter size of array:\t");
	scanf("%d", &n);
	
	p = (int *)malloc(sizeof(int)*n);
	
	printf("Enter values:\t");

	for(i=0;i<n;i++){
		scanf("%d", (p+i));
	}
	for(i=0;i<n;i++){
		printf("%d ", *(p+i));
	}
	free(p);
	return 0;
}
