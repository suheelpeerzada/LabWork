#include<stdio.h>
#define size 5

void enqueue();
void dequeue();
void display();

int a[size], F=0, R=-1, count;
void main(){
	int x;
	printf("Circly Queue!\n");
	printf("Enter:\n");
	while(1){
		printf("1) Enqueue\n2) Dequeue\n3) Display\n");
		scanf("%d", &x);
		switch(x){
			case 1:
				if(count==size){
					printf("Queue is full!\n");
					break;
				}
				enqueue();
				break;
			case 2:
				if(count==0){
					printf("Queue is Empty!\n");
					return;
				}
				dequeue();
				break;
			case 3:
				if(count==0){
					printf("Queue is Empty!\n");
					break;
				}
				display();
				break;
			default:
				printf("Invalid Choice!\n");
				break;
		}
	}
}
void enqueue(){
	int data;
	printf("Enter Data:\n");
	scanf("%d", &data);
		R=(R+1)%size;
		a[R]=data;
		count++;
		return;
}
void dequeue(){
	printf("Data removed: %d\n", a[F]);
	F=(F+1)%size;
	count--;
	return;
}
void display(){
	int x=F, i;
	printf("Elements in Queue:\n");
	for(i=1;i<=count;i++){
		printf("%d\n", a[x]);
		x=(x+1)%size;
	}
}