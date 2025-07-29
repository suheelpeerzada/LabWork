#include<stdio.h>
#include<conio.h>
main(){
	int k=0, i, *p, a[5]={78,34,98,3,69};
	for(i=0;i<5;i++){
		printf("A[%d]= %d\n", i, a[i]);
	}
    p=&a[2];
	printf("Enter new value for A[2]:\n");
	scanf("%d", &k);
	*p=k;
	for(i=0;i<5;i++){
		printf("A[%d]= %d\n", i, a[i]);
	}
}
