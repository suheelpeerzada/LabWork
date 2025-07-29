#include<stdio.h>
#include<conio.h>
main(){
	int k=0, i, *p, a[5]={78,34,98,3,69};
	p=&a[0];
	for(i=0;i<5;i++){
		k+=*p;
		p++;
	}
	printf("Sum of Array elements is: %d", k);
}
