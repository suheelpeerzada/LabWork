#include<stdio.h>

int fact(int a[], int x, int i){
	int factl;
	if(x==1)
	return 1;
	else{
		factl = x*fact(a, x-1, i+1);
		a[i] = factl;
		return factl;
	}
}

int main(){
	int x = 10, a[20]= {0}, i = 0;	
	fact(a, x, i);
	
	for(i=0;i<=x;i++)
	printf("%d ", a[i]);
	
	return 0;
}
