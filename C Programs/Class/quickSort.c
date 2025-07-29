//quickSort
#include<stdio.h>
#define max 7

void quickSort(int a[], int low, int high){
	int pivot, temp, i, j;
	if(low<high){
		pivot = a[low];
		i = low+1;
		j = high;
		
		while(1){
			while(pivot > a[i] && i<=high)
				i++;
			while(pivot < a[j] && j>low)
				j--;
			
			if(i<j){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			else break;
		}
		a[low] = a[j];
		a[j] = pivot;
		
		quickSort(a,low,j-1);
		quickSort(a,j+1,high);
	}
}


int main(){
	int a[max] = {12,5,34,7,98,32,4};
	int i;
	
	printf("Before:\t");
	for(i=0;i<max;i++){
		printf("%d ", a[i]);
	}
	
	quickSort(a, 0, max-1);
	
	printf("\nAfter:\t");
	for(i=0;i<max;i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
