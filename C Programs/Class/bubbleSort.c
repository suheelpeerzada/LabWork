//bubble sort

#include<stdio.h>
#define max 7

int arr[max] = {4,8,3,5,1,9,6};

void bubbleSort(){
	int i, j, temp;
		for(i=0;i<max;i++)
		for(j=0;j<max-1-i;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
}

int main(){
	int i;
	printf("before:\t");
	for(i=0;i<max;i++){
		printf("%d ", arr[i]);
	}
	
	bubbleSort();
	
	printf("\nafter:\t");
	for(i=0;i<max;i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
