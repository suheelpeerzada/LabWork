//mergeSort

#include<stdio.h>
#define max 7

void merge(int a[], int low, int mid, int high){
	int i = low, j = mid+1, k = low;
	int b[max];
	
	while(i<=mid && j<=high){
		if(a[i] < a[j]){
			b[k] = a[i];
			i++; k++;
		}
		else{
			b[k] = a[j];
			j++; k++;
		}
	}
	while(i<=mid){
		b[k] = a[i];
		i++; k++;
	}
	while(j<=high){
		b[k] = a[j];
		j++; k++;
	}
	for(i=low;i<=high;i++){
		a[i] = b[i];
	}
}

void mergeSort(int a[], int low, int high){
	int mid;
	if(low<high){
		mid = (low+high)/2;
		
		mergeSort(a,low,mid);
		mergeSort(a, mid+1, high);
		
		merge(a,low,mid,high);
	}
}

int main(){
	int a[max] = {12,5,34,7,98,32,4};
	int i;
	
	printf("Before:\t");
	for(i=0;i<max;i++){
		printf("%d ", a[i]);
	}
	
	mergeSort(a, 0, max-1);
	
	printf("\nAfter:\t");
	for(i=0;i<max;i++){
		printf("%d ", a[i]);
	}
}
