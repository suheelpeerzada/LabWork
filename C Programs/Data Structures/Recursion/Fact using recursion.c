#include<stdio.h> 
int fact(int a){
	int r;
	if(a==1)
	return 1;	
	else{
	r=a*fact(a-1);
    }
}
int main(){
	int x, f;
	printf("Enter factonum:");
	scanf("%d", &x);
	f=fact(x);
	printf("Factorial is: %d", f);
}
