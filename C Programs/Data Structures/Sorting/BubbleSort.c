#include<stdio.h>

void printArray(int A[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}
void bubbleSort(int A[], int n){
	int i, j, temp, k;
	for(i=0;i<10;i++)
		for(j=0;j<n-1-i;j++){
			if(A[j]>A[j+1]){
			temp = A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
			}
		}
	}
void main(){
	int n = 10;
	int a[10] = {23,54,2,56, 9,12,7,54,3,1};
	
	printArray(a , n);
	bubbleSort(a , n);
	printArray(a , n);
}
