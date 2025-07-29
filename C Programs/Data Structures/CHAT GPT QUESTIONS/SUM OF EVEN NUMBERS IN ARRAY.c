#include<stdio.h>

void main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int sum = 0;
	int i;
	
	for(i=0;i<10;i++){
		if(a[i] % 2 == 0)
		sum += a[i];
	}
	printf("Sum of even numbers:\t%d", sum);
}
