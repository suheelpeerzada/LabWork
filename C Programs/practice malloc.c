#include<stdio.h>
#include<stdlib.h>

main(){
	int i, n;
	int *p;
	printf("Enter number of elements:\t");
	scanf("%d", &n);
	p=(int *)malloc(sizeof(int)*n);
	if(p==NULL){
		printf("Overflow!\n");
		return;
	}
	printf("Enter elements:\t");
	for(i=0;i<n;i++){
		scanf("%d", p+i);
	}
	printf("The elements are:\t");
	for(i=0;i<n;i++){
		printf("%d\t", *(p+i));
	}
	free(p);
}
