//find possible sums in array
#include<stdio.h>

int main(){
	int arr[] = {1, 2, 3,5,7,9, 2,6};
	int target = 8;
	int size = sizeof(arr)/sizeof(arr[0]);
	int count = 1;
	int dest[size];
	int i, j, k = 0;
	
	for(i=1;i<size;i++)
	for(j=0;j<i;j++){
		if(arr[i]+arr[j] == target){
			dest[k] = arr[j];
			dest[k+1] = arr[i];
			k+=2;
			count++;
		}
	}
	for(i=0;i<=count;i++)
		printf("%d ", dest[i]);
}
