#include<stdio.h>
//#include<stdlib.h>
#define num 50

void printArray(int a[], int max){
	int i;
	printf("\nArray is:\n");
	for(i=0;i<max;i++)
	printf("%d ", a[i]);	
}

void merge(int a[], int low, int mid, int high){
	int i, j, k, buf[high];
	i = k = low;
	j = mid+1;
	
	while(i<=mid && j <= high){
		if(a[i] < a[j]){
			buf[k] = a[i];
			i++; k++;
		}
		else{
			buf[k] = a[j];
			j++; k++;
		}
	}
	while(i<=mid){
		buf[k] = a[i];
		i++; k++;
	}
	while(j<=high){
		buf[k] = a[j];
		j++; k++;
	}
	for(i=low;i<=high;i++)
		a[i] = buf[i];
}

//void missing(int a[], int max){
//	int i=1, j = 0;
//	printf("\nMissing numbers are:\t");
//	while(i<=max){
//		if(i == a[j]){
//			i++; j++;
//		}
//		else{
//			printf("%d\t", i);
//			i++;
//		}
//	}
//}


void mergeSort(int a[], int low, int high){
	int mid;
	if(low<high){
		mid = (low+high)/2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}


int main(){
	int a[num], i;
	int max = num;
	for(i=0;i<max;i++){
		if(i%2 == 0)
		a[i] = i*i;
		else
		a[i] = i;
	}
	mergeSort(a, 0, max-1);
	printArray(a, max);

	return 0;
}
