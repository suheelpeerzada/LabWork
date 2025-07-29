#include<stdio.h>

void main(){
	int a[10] = {12,23,53,2,95,1925,292,36,3,90}, big,i,j, notbig, isEqual = 1;
	printf("Enter array elements\n");
	big = a[0];
	notbig = a[1];
	for(i=1;i<10;i++){
		for(j=0;j<i;j++){
			if(a[i]<a[j]){
			isEqual = 0;
			big = a[j];
			}
		}}
		for(i=1;i<10;i++){
		for(j=0;j<i;j++){
			if(a[i]<a[j] && a[j] < big){
				notbig = a[j];
			}
		}
	}
	if(isEqual == 1)
	printf("All elements are equal");
	else
	printf("Second largest is: %d\n", notbig);
	}
