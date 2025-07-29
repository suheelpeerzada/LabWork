#include<stdio.h>

void coinChange(int coins[], int amount, int coinSize){
	int a[coinSize][amount];
	int i,j;
		for(j=0;j<amount;j++){
			if(j == 0)
				a[0][j] = 1;
				else
					a[0][j] = 0;
				}
	for(i=0;i<coinSize;i++)
		a[i][0] = 1;
	for(i=1;i<coinSize;i++)
		for(j=1;j<amount;j++){
			if(coins[i] > j)
				a[i][j] = a[i-1][j];
			else
				a[i][j] = a[i-1][j] + a[i][j-coins[i]];
		}
	printf("Possible ways are:\n");
	printf("{");
	for(i=0;i<coinSize;i++){
		for(j=0;j<amount;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("}");
}
int main(){
	int coins[5] = {2,3,5,10};
	int amount;
	int coinSize = 4;
	
	printf("Enter amount:\n");
	scanf("%d", &amount);
	
	coinChange(coins,amount,coinSize); 
	
	return 0;
}
