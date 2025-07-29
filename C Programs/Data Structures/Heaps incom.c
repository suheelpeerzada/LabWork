//min heap
#include<stdio.h>
int a[100], x;
void minheap();
void maxheap();
void displayheap();
void delheap();
void main(){
	int i, c;
	while(1){
		printf("1. Insert\n2. Display\n 3. MinHeap\n 4. MaxHeap\n 5. Delete\n");
		scanf("%d", &c);
		switch(c){
			case 1:
				for(i=0;i<100;i++)
				a[i] = -1;
				printf("Enter total number of elements:\t");
				scanf("%d", &x);
				printf("Enter elements:\t");
				for(i=0;i<=x;i++)
				scanf("%d", &a[i]);
				break;
			case 2: 
				displayheap();
				break;
			case 3:
				minheap();
				break;
			case 4:
				maxheap();
				break;
			case 5:
				delheap();
		}
	}
}
void minheap(){
	int 
	if(a[0]==-1){
		printf("Heap Empty!\n");
		return;
	}
	
}
void displayheap(){
	int i;
	if(a[0]==-1){
		printf("Heap Empty!\n");
		return;
	}
	for(i=0;i<x;i++)
	printf("%d ", a[i]);
	return;
}
