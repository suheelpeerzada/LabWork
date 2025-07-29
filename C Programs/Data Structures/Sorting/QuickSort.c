//QuickSort
#include<stdio.h>

void printArray(int n, int a[]){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t", a[i]);
	}
}
void quickSort(int a[], int low, int high){
	int partitionIndex;
	if(low<high){
		partitionIndex = partition(a , low, high);
		quickSort(a, low, partitionIndex-1);
		quickSort(a, partitionIndex+1, high);
	}
}
int partition(int a[], int low, int high){
	int pivot = a[low];
	int i =low+1;
	int j = high;
	int temp;
	
	do{
		while(a[i]<pivot){
			i++;
		}
		while(a[j]>pivot){
			j--;
		}
		if(i<j){
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	} while(i<j);
	temp = a[j];
	a[j] = a[low];
	a[low] = temp;
	
	return j;
}
void main(){
	int a[]={12,45,3,6,7,56};
	int n=6;
	
	printf("Current Array:\n");
	printArray(n , a);
	quickSort(a , 0, n-1);
	printf("\nAfter QuickSort:\n");
	printArray(n , a);
}
