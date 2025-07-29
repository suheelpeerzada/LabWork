//pass an array and print it

#include<stdio.h>

void printArray(int arr[]){
	int i;
	for(i=0;i<5;i++)
	printf("%d ", arr[i]);
}

void main(){
	int arr[5] = {3,4,5,6,7};
	int size;
	size = sizeof(arr);
	printf("size is: %d", size);
	printArray(arr);
}
