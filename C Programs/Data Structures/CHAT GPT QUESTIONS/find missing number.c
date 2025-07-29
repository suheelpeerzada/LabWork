#include<stdio.h>

int main(){
	int arr[] = {1,2,3,4,5,7,8,9,10};
	int x = (sizeof(arr)/sizeof(arr[0])) - 1;
	int missing;
	int sum1 = 0, i;
	int sum = 0;
	for(i=0;i<=x;i++){
		sum+=arr[i];
	}
	i = arr[x];
	while(i>0){
		sum1 += i;
		i--;
	}
	missing = sum1 - sum;
	
	printf("%d\t%d\t", sum, sum1);	
	printf("Missing element is: %d\n", missing);
	
	return 0;
}
