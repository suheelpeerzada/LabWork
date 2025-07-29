#include<stdio.h>
void printArray(int *A, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}
void selectionSort(int *A, int n){
	int i, j, min,temp;
	for(i=0;i<n-1;i++){
		min = i;
		for(j=1;j<n;j++){
			if(A[min]>A[j])
			min=j;
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
}
void main(){
	int A[5]={5,4,3,2,1};
	int n=5;
	printArray(A , n);
	selectionSort(A , n);
	printArray(A , n);
}
