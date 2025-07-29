//MergeSort
#include<stdio.h>

void merge(int a[], int low, int mid, int high){
	int i, j, k, b[100];
	i = k = 0;
	j = mid+1;
	while(i <= mid && j <= high){
		if(a[i] > a[j]){
			b[k] = a[i];
			i++; k++;
		}
		else{
			b[k] = a[j];
			j++; k++;
		}
	}
	while(i <= mid){
		b[k] = a[i];
		i++; k++;
	}
	while(j <= high){
		b[k] = a[j];
		j++; k++;
	}
	for(i=low;i<=high;i++)
		a[i]=b[i];
}
void mergeSort(int a[], int low, int high){
	int mid, i;
	if(low<high){
		for(i=0;i<6;i++)
		mid = (low+high)/2;
		mergeSort(a, low, mid);
		mergeSort(a, mid+1, high);
		merge(a, low, mid, high);
	}
}
void main(){
	int i, a[6]={12,34,354,23,24,4}, low = 0, high = 5;
	printf("Before:\t");
	for(i=0;i<6;i++)
	printf("%d ", a[i]);
	printf("\n");
	mergeSort(a, low, high);
	printf("After:\t");
	for(i=0;i<6;i++)
	printf("%d ", a[i]);
}
