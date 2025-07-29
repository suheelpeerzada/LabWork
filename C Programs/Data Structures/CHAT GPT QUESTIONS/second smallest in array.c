#include <stdio.h>

int findSecondSmallest(int arr[], int size) {
    // Your implementation goes here
    int i;
    int small = 500;
    int secondsmall = 200;
    for(i=0;i<size;i++)
    if(arr[i]<small)
	small = arr[i];
	
	for(i=0;i<size;i++)
	if(arr[i] > small && arr[i] < secondsmall)
	secondsmall = arr[i];
	
	return secondsmall;    
}

int main() {
    int array[] = {5, 8, 2, 1, 9, 3};
    
    int secondSmallest = findSecondSmallest(array, 6);
    
    printf("The second smallest element is: %d\n", secondSmallest);

    return 0;
}

