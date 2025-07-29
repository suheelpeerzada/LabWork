//fact using DP (iterative)

#include<stdio.h>

int main(){
	int arr[50] = {0};
	int i=0, num = 10, fact = 1;
		
	while(i<=num){
		if(i==0)
			arr[i] = 1;
		else{
			arr[i] = arr[i-1] * i;
			printf("%d\n", arr[i]);
		}
		i++;
	}
	printf("Factorial is %d", arr[i-1]);
	
	return 0;
}
