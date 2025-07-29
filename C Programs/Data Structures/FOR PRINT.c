#include<stdio.h>
int n = 8, i=0;
int a = 0; int b = 1, c = 0;
int main(int x, int y){
	i++;
	if(i==0){
		printf("%d %d ", a,b);
	}
	if(i>n)
	return 1;
	else{
		c = a + b;
		printf("%d ", c);
		main(c , a);
	}	
}
