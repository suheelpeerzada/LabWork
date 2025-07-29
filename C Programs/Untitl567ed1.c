//knapsack

#include<stdio.h>
#define max 7

float knapsack(float capacity, float w[], float p[]){
	int i,j;
	float solution =0, vertex[max];
	for(i=0;i<max;i++)
	vertex[i] = 0;
	
	for(i=0;i<max;i++){
		if(w[i] < capacity){
			solution += p[i];
			capacity -= w[i];
			vertex[i] = 1;
		}
		else{
			vertex[i] = (capacity/w[i]);
			solution += p[i] * vertex[i];
//			capacity-=w[i];
			break;
		}
	}
	
	printf("Vertex array is:\t");
	for(i=0;i<max;i++)
	printf("%f ", vertex[i]);                                                                                                                                                                                                                                                                                                             
	
	return solution;
}

void main(){
	float profit[] = {6,10,18,15,3,5,7};
    float w[] = {1,2,4,5,1,3,7};
    float capacity = 15, solution;
	int i;
	
//	printf("Enter capacity:\t");
//	scanf("%f", &capacity);
//	
//	printf("Enter weight:\t");
//	for(i=0;i<max;i++)
//	scanf("%f", &w[i]);
//	
//	printf("Enter profit:\t");
//	for(i=0;i<max;i++)
//	scanf("%f", &profit[i]);
//	
	solution = knapsack(capacity, w, profit);
	
	printf("\nSolution is:\t%f\n", solution);
}
