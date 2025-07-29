#include<stdio.h>

main(){
	int arr[5];
	int i;
	for(i=0;i<5;i++){
		printf("Enter element:");
		scanf("%d", &arr[i]);
	}
	for(i=0;i<5;i++)
	printf("%d ", arr[i]);
}
