#include<stdio.h>

void printArray(int arr[]){
	int  i;
	for(i=0;i<sizeof(arr)-1;i++)
	printf("%d ", arr[i]);
	printf("\n");
}
void shiftArray(int a[], int k, int high){
	int temp=a[high];
	int i = high;
	if(k<= 0)
		return;
	while(i!=0){
		a[i] = a[i-1];
		i--;
	}
	a[i] = temp;
	shiftArray(a, k-1, high);
}
main(){
	int k;
	int arr[7] = {10,12,13,14,15,16,17};
	int high = 6;
	printArray(arr);
	
	printf("Enter number of shifts\n");
	scanf("%d", &k);
	
	shiftArray(arr, k, high);
	
	printArray(arr);
}
