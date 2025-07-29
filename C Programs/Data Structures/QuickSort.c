//Quick Sort
#include<stdio.h>

void quickSort(int a[], int low, int high){
	int temp, pivot, i, j;
	if(low < high){
	pivot = a[low];
	i = low + 1;
	j = high;
	while(1){
		while(pivot > a[i] && i <= high)
		i++;
		while(pivot < a[j] && j >= low)
		j--;
		if(i<j){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		else
		break;
	}
	a[low] = a[j];
	a[j] = pivot;
	
	quickSort(a, low, j-1);
	quickSort(a, j+1, high);
}}
void main(){
	int a[]= {23,56,43,2,75,14}, n = 6, i;
	for(i=0;i<n;i++)
	printf("%d  ", a[i]);
	quickSort(a, 0, n-1);
	printf("\n");
	for(i=0;i<n;i++)
	printf("%d  ", a[i]);
}
