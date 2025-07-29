#include<stdio.h>
#include<stdlib.h>

void fcfs(int bt[], int n){
	int wt[n], tat[n], i;
	wt[0] = 0;
	for(i=1;i<n;i++){
		wt[i]=wt[i-1]+bt[i-1];
	}
	for(i=0;i<n;i++){
		tat[i]=bt[i]+wt[i];
	}
	printf("pid\t\tBT\t\tWT\n");
	for(i=0;i<n;i++){
		printf("%d\t\t%d\t\t%d\n",i+1, bt[i], wt[i]);
	}
}

int main(){
	int i, n, *bt;
	
	printf("Enter no of processes:\n");
	scanf("%d", &n);
	
	bt = (int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++){
		printf("Enter bt for %d:\t", i+1);
		scanf("%d", &bt[i]);
	}
	
	fcfs(bt, n);
	
	return 0;
}
