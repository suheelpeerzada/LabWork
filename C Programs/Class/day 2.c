//static queue
#include<stdio.h>
#define max 5

void enqueue();
void dequeue();
void display();

int a[max];
int front = -1;
int rear = -1;


void main(){
	int choice;
	while(1){
		printf("\n1. Enqueue\n2. Dequeue\n3. Display\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("Invalid case selected!\n");
				break;
		}
	}
}

void enqueue(){
	int x;
	if(rear >= max-1){
		printf("Queue is full!\n");
	}
	else{
		printf("Enter element:\t");
		scanf("%d", &x);
			if(rear == -1){
				front++;
				rear++;
				a[rear] = x;
			}
			else{
				rear++;
				a[rear] = x;
			}
	}
}
void display(){
	int i;
	if(rear == -1){
		printf("Queue is empty!\n");
	}
	else{
		for(i=front;i<=rear;i++)
		printf("%d ", a[i]);
	}
}
void dequeue(){
	if(rear == -1){
		printf("Queue is empty!\n");
	}
	else{
		front++;
		if(front>rear){
			front = -1;
			rear = -1;
		}
	}
}
