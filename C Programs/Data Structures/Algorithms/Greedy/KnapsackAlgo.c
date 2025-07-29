#include<stdio.h>

void knapsack(float w[], float p[], float capacity, int n){
	float profit = 0, x[n];
	int i;
	
	for(i=0;i<n;i++)
	x[i] = 0;
	
	for(i=0;i<n;i++){
		if(w[i]<capacity){
			x[i] = 1;
			profit+=p[i];
			capacity-=w[i];
		}
		else{
			x[i] = capacity/w[i];
			profit+= p[i]*x[i];
			break;
		}
	}
	printf("Solution Array is:\t");
	for(i=0;i<n;i++)
	printf("%f ", x[i]);
	
	printf("\nMaximum Profit:\t%f\n", profit);
}

void main(){
	int items = 7, i;
	float p[] = {6,10,18,15,3,5,7};
    float w[] = {1,2,4,5,1,3,7};
	float capacity;
	
	printf("Enter capacity of bag\n");
	scanf("%f", &capacity);
	
	knapsack(w,p,capacity, items);
}
