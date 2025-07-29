//pointers

#include<stdio.h>

void main(){
	int x[5];
	int *p;
	p = &x[0];
	float y[5];
	float *q;
	q = &y[0];
	char s[5];
	char *r;
	r = &s[0];
	int i;
	for(i=0;i<5;i++){
		printf("int:\t%u\n", &x[i]);
//		p++;
	}	
	for(i=0;i<5;i++){
		printf("float:\t%u\n", &y[i]);
//		q++;
	}
	for(i=0;i<5;i++){
		printf("char:\t%u\n", &s[i]);
//		r++;
	}
}
