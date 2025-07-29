#include<stdio.h>

int main(){
	int i, x[] = {2,5,4,76,453};
	int  *p;
	p = &x[0];
	for(i=0;i<5;i++)
	printf("%d ", x[i]);
	*(p+2) = 10;
	for(i=0;i<5;i++)
	printf("%d ", x[i]);
}
