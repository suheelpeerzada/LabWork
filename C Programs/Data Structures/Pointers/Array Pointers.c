#include<stdio.h>
#include<conio.h>
main(){
	int i, *p, a[5]={43,74,12,4,75,342};
	for(i=0;i<5;i++){
	printf("The value of A[%d] is: %d\n", i, a[i]);
	printf("The address of A[%d] is: %d\n", i, &a[i]);
    }
    printf("\n\n");
    p=&a[0];
    for(i=0;i<5;i++){
	printf("The value of A[%d] is: %d\n", i, p);
	printf("The value of address at A[%d] is: %d\n", i, *p);
	printf("The address of A[%d] is: %u\n",i, &p);
	p++;
}
}
