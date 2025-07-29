//knapsack
#include<stdio.h>

void knapsack(float capacity, float p[], float w[], int n){
	float profit = 0, sol[n]; 
	int i=0;
	for(i=0;i<n;i++)
	sol[i] = 0;
	
	i=0;
	
	for(i=0;i<n;i++){
		if(w[i] < capacity){
			sol[i] = 1;
			capacity-=w[i];
		}
	}
	if(i < n)
		sol[i] = capacity/w[i];
	for(i=0;i<n;i++)
		profit+=p[i]*sol[i];
	
	printf("x\tprofit\t\tweight\t\tvector\n");
	for(i=0;i<n;i++){
		printf("%d\t%f\t%f\t%f\n", i+1, p[i], w[i], sol[i]);
	}
	printf("Profit:\t%f\n", profit);
}

int main(){
	float capacity = 20;
	int bags = 3;
	float profit[] = {30,21,18};
	float weight[] = {18,15,10};	
	
	knapsack(capacity, profit, weight, bags);
	
	return 0;
}
