#include<stdio.h>

void knapsack(float capacity, float p[], float weight[], int bags){
	int sol[bags], profit = 0, i;
	for(i=0;i<bags;i++){
		sol[i] = 0;
	}
	for(i=0;i<bags;i++){
		if(weight[i] < capacity){
			sol[i] = 1;
			capacity-=weight[i];
		}
	}
	if(i<bags){
		sol[i] = capacity/weight[i];
	}
	for(i=0;i<bags;i++){
		profit += p[i]*sol[i];
	}
	
	printf("Sol vector:\n");
	for(i=0;i<bags;i++){
		printf("%d  ", sol[i]);
	}
	
	printf("\nProfit:\t%d", profit);
}

int main(){
	float capacity = 20;
	int bags = 3;
	float profit[] = {30,21,18};
	float weight[] = {18,15,10};	
	
	knapsack(capacity, profit, weight, bags);
	
	return 0;
}
