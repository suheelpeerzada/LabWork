#include<stdio.h>

void main(){
	int arr[6] = {1,2,3,4,5, 6};
	printf("%d", sizeof(arr));
	
	int n = sizeof(arr) / sizeof(arr[0]);
}
