//bubble sort

#include<stdio.h>

void bubbleSort(int n, int a[]){
	int i, j, temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
void main(){
	int a[]= {23,56,43,2,75,14}, n = 6, i;
//	for(i=0;i<n;i++)
//	printf("%d  ", a[i]);
	bubbleSort(n, a);
//	printf("\n");
//	for(i=0;i<n;i++)
//	printf("%d  ", a[i]);
}
