#include<stdio.h>

void printArray(int arr[]){
	int i;
	for(i=0;i<5;i++)
	printf("%d ", arr[i]);
}

void main(){
	int arr[5] = {12,34,56,67,89};
	printArray(arr);
}

