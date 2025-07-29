#include<stdio.h>
main(){
	int k=0, i, *p, a[5]={78,34,98,3,69};
	printf("Enter number:\n");
	scanf("%d", &k);
	for(i=0;i<5;i++){
	p=&a[i];
	if(k==*p)
	{
	  printf("The memory address of %d is: %u\n", k, p); 
    }
    else
    printf("Checking at A[%d]..., Not Found.\n", i);
}}
