#include<stdio.h>
main(){
	int a[]={21,76,543,97,2},c[]={84,91,364,97,76}, i,j,l,x;
	printf("Quiz Questions:\n");
	while(1){
		j=rand(a);
	    l=rand(c);
	    printf("%d * %d=\t", *a,*c);
	    scanf("%d", &x);
	    if(j * l!=*x){
	    	printf("Wrong answer!!\n");
	   return;
	   }
	}
}
