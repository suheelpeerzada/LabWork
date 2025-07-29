//Merge Sort
#include<stdio.h>

void printArray(int n, int a[]){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t", a[i]);
	}
}
void mergeSort(int a[], int low, int high){
	int mid;
	if(low<high){
		mid = (low+high)/2;
		mergeSort(a , low , mid);
		mergeSort(a , mid+1, high);
		merge(a , mid , low , high);
	}
}
int merge(int a[], int mid, int low, int high){
	int i, j, k, b[6];
	i=low, k=low, j=mid;
	while(i<=mid && j<=high){
		if(a[i]<a[j]){
			b[k]=a[i];
			k++;i++;
		}
		else{
			b[k]=a[j];
			k++;j++;
		}
	}
	while(i<=mid){
		b[k]=a[i];
		k++;i++;
	}
	while(j<=high){
		b[k]=a[j];
		k++;j++;
	}
	for(i=low;i<=high;i++){
		a[i]=b[i];
	}
}
void main(){
	int n=6;
	int a[6] = {56,34,6,3,12,89}, i;
	
//	for(i=0;i<n;i++){
//		a[i]=i+1;
//	}
	
	printf("Current Array:\n");
	printArray(n , a);
	mergeSort(a , 0, n-1);
	printf("\nAfter MergeSort:\n");
	printArray(n , a);
}
