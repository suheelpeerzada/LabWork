#include <stdio.h>

void findIndices(int arr[], int size, int target) {
    // Your implementation goes here
    int i, j;
	for(i=0;i<size;i++)
	for(j=i+1;j<size;j++){
		if(i!=j){
			if(arr[i]+arr[j] == target)
			printf("%d and %d\n", i,j);
		}
	}    
}

int main() {
    int array[] = {2, 7, 11, 15, 3, 6};
    int targetSum = 9;
    
    findIndices(array, 6, targetSum);
    
    return 0;
}
