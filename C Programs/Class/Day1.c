//stactic stack
#include<stdio.h>

void push();
void pop();
void display();
void peek();

int a[5];
int max = 5;
int top = -1;

void main(){
	int choice;
	while(1){
		printf("\n1. Push\n2. Pop\n3. Display\n4. Peek\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			default:
				printf("Invalid case selected!\n");
				break;
	}
}
}
void push(){
	int x;
	if(top >= max-1){
		printf("Stack Overflow!\n");
	}
	else{
		top++;
		printf("Enter element:\t");
		scanf("%d", &x);
		a[top] = x;
	}
}
void display(){
	int i;
	if(top == -1){
		printf("Stack is empty!\n");
	}
	else{
		for(i=top;i>=0;i--){
			printf("%d\t", a[i]);
		}
		printf("\n\n");
		for(i=4;i>=0;i--){
			printf("%d\t", a[i]);
		}
	}
}
void pop(){
	if(top == -1)
	printf("Stack Empty\n");
	else{
		top--;
	}
}
void peek(){
	if(top == -1)
	printf("Stack is empty\n");
	else
	printf("%d\n", a[top]);
}
