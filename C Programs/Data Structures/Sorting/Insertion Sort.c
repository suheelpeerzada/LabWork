#include<stdio.h>
void printArray(int *A, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}
void insertionSort(int *A, int n){
	int i, j, key;
	for(i=0;i<n;i++){
		key = A[i];
		j=i-1;
		while(j>=0 || A[j] > key){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
}
void main(){
	int A[5]={5,4,3,2,1};
	int n=5;
	printArray(A , n);
	insertionSort(A , n);
	printArray(A , n);
}
