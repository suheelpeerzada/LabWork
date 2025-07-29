//graycode
#include<stdio.h>

void printArray(int size,int a[]){
	int i = 0;
	for(i=0;i<=size;i++)
	printf("%d ", a[i]);
}

void separate(int num, int a[], int size){
	int i=0;
	while(num > 0){
		a[i] = num%10;
		num/=10;
		printf("\nhere: %d\t%d\n", a[i], num);
		i++;
	}
}
int graycode(int a[], int size){
	int num = a[size];
	int i = size;
	while(i>=1){
		if(a[i] != a[i-1])
			num = (num*10) + 1;
		else 
			num = (num*10) + 0;
		i--;
	}
	return num;
}

int main(){
	int x = 1011;
	int size = 4;
	int arr[10];
	int i;
	printArray(size, arr);
	printf("\n");
	separate(x, arr, size);
	printArray(size, arr);
	printf("\n");
	printf("GrayCode is: %d", graycode(arr, size-1));
	
	return 0;
}
