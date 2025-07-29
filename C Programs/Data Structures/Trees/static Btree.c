#include<stdio.h>
#include<stdlib.h>

int a[100];

int Search(int a[],int x, int size){
	int i;
	for(i=0;i<size;i++){
		if(a[i] == x)
		return i;
	}
	return 0;
}
void deltree(int index, int a[]){
	if(a[index] == 0){
		return;
	}
	else{
		deltree((2*index)+1, a);
		deltree((2*index)+2, a);
		a[index] = 0;
	}
	return;
}
void main(){
	int i, j, x, k=0, l=0, c;
	char s;
	for(i=0;i<100;i++)
		a[i]=0;
	while(1){
		printf("\n1. Insert Btree\n2. Display Btree\n3. Delete\n5. Exit\n");
		scanf("%d", &c);
	switch(c){
		case 1:
			printf("Enter total no of indecies:\t");
			scanf("%d", &j);
			printf("Enter Root: \t");
			scanf("%d", &a[0]);
			while(k*2<j){
//				printf("\nk = %d\n", k);
				if(a[k] != 0){
					printf("Enter left node for root %d:\n", a[k]);
					scanf("%d", &x);
					a[(2*k)+1] = x;
					printf("Enter right node for root %d\n", a[k]);
					scanf("%d", &x);
					a[(2*k)+2] = x;
				}
				k++;
			}
			break;
		case 2:
			if(a[0]==0){
				printf("Tree Empty!\n");
				break;
			}
			for(i=0;i<=j;i++){
			printf("%d | ", a[i]);
			}
			printf("\n");
			for(i=0;i<=j;i++){
			printf("%d | ", i);
			}
			break;
		case 3:
			if(a[0]==0){
				printf("Tree Empty!\n");
				break;
			}
			printf("Enter element you want to remove.");
			for(i=0;i<=j;i++){
			printf("%d | ", a[i]);
			}
			printf("\n");
			scanf("%d", &x);
			k = Search(a, x, j);
			printf("%d", k);
			if(k==0){
				printf("Element not found!\n");
				break;
			}
			deltree(k, a);
			printf("Done!\n");
			break;
			
		case 5:
			exit(0);
		default:
			printf("Invalid option selected!");
			break;
		}
	}
}
