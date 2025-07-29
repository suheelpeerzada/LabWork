#include<stdio.h>
#include<stdbool.h>
#define max 5
void push();
void pop();
void display();
void peek();
int stack[max];
int top=-1;
int i=0;
main(){
	int x;
	printf("Static Stacking\n");
	printf("1. Push elements in stack\n");
	printf("2. Remove top element\n");
	printf("3. Display all elements\n");
	printf("4. Display last element\n");
	printf("5. Exit\n");
	while(1){
	printf("Enter above value:\n");
	scanf("%d", &x);
		switch(x){
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
			//case 5:
				//exit(0);
			default:
				printf("Enter valid option\n");
				break;
		}
	}
}
void push(){
	printf("Enter value:\n");
	if(top<max){
		scanf("%d", &stack[top+1]);
    	top++;
    }
    else
    printf("Stack Overflow!\n");
}
void pop(){
	if(top>-1){
		top--;
	printf("Last value popped\n");
	}
	else
	printf("Stack is Empty\n");
}
void display(){
	if(top>-1){
		printf("\n\n");
	for(i=top;i>=0;i--){
		printf("%d\n", stack[i]);
	printf("\n\n");
	for(i=max-1;i>=0;i--)
		printf("%d\n", stack[i]);
	}}
	else
	printf("Stack is empty.\n");
}
void peek(){
	if(top>-1)
	printf("Last value entered is: %d\n", stack[top]);
	else
	printf("Stack is empty\n");
}

