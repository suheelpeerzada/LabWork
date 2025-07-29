#include<stdio.h>
#define max 20
int a[max];
int count = 0;

void insertbst(){
	int x, i=0;
	
	if(count == max){
		printf("Array is full!\n");
		return;
	}
	
	printf("Enter Data:\n");
	scanf("%d", &x);
	
	if(a[0] == -1){
		a[0] = x;
		return;
	}
	
	while(a[i]!=-1){
		while(a[i] > x && a[i]!=-1){
			i = (2*i) + 1;
		}
		while(a[i] < x && a[i]!=-1)
			i = (2*i) + 2;
		count++;
	}
	a[i] = x;
}

void inorder(){
	int left=0, right=0, i;
	
	if(count == 0){
		printf("bst empty!\n");
		return;
	}
	
	while(a[left] != -1){
		left = (2*left) + 1;
	}
	while(a[right] != -1){
		right = (2*right) + 2;
	}
	for(i=max;i>=0;i++){
		if(a[left]!=-1 && left > 0){
			printf("%d ", a[left]);
			left = (left-1)/2;
		}
		if(a[right]!=-1 && right > 0){
			printf("%d ", a[right]);
			right = (right-1)/2;
		}
	}
}

int main(){
	int choice, i;
	for(i=0;i<max;i++){
		a[i] = -1;
	}
	while(1){
		printf("\n1. Insert\n2. Display\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				insertbst();
				break;
			case 2:
				inorder();
				break;
			default:
				printf("Invalid case selected!\n");
				break;
		}
	}
	return 0;
}
