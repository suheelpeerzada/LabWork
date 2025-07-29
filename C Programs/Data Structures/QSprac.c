#include<stdio.h>
#define num 500000

void printArray(int a[], int max){
	int i;
	printf("\nArray is:\n");
	for(i=0;i<max;i++)
	printf("%d ", a[i]);	
}

int quickSort(int a[], int low, int high){
	int i, j, pivot, temp;
	if(low<high){
		pivot = a[low];
		i = low+1;
		j = high;
		while(1){
			while(pivot > a[i] && i <= high)
			i++;
			while(pivot < a[j] && j >= low)
			j--;
			if(i<j){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
			else break;
		}
		a[low] = a[j];
		a[j] = pivot;
		
		quickSort(a, low, j-1);
		quickSort(a,j+1, high);
	}
}

int main(){
	int a[num], i, max = num;
	
	for(i=0;i<max;i++){
		if(i%2 == 0)
		a[i] = i*i;
		else
		a[i] = i;
	}
	
	quickSort(a, 0, max-1);
//	printArray(a, max);
	
	return 0;
}
