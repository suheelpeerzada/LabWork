#include<stdio.h>
main(){
	int n=5, *a, *b;
	a=&n;
	b=*a;
	printf("%d\n%d\n%d", n,a,b);
}
