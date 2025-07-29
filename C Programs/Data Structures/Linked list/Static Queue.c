#include<stdio.h>
#define max 4

int F=0, R=-1, Q[max];

void enqueue();
void dequeue();
void display();
void count();

int main(){
	int x;
	printf("Static Queue\n");
	printf("Enter:\n");
	while(1){
		printf("1) Enqueue\n2) Dequeue\n3) Display\n4) Count\n");
		scanf("%d", &x);
		switch(x){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				count();
				break;
			default:
				printf("Wrong choice!\n");
				break;
		}
	}
}
void enqueue(){
	int d;
	if(R==max-1){
		printf("Queue is full!\n");
		return;
	}
	printf("Enter data:\n");
	scanf("%d", &d);
		R++;
		Q[R]=d;
}
void dequeue(){
	if(R==-1){
		printf("Queue Empty!\n");
		return;
	}
	printf("Value Deleted: %d\n", Q[F]);
	F++;
	if(F==R){
		F=0;
		R=-1;
		return;
	}
}
void display(){
	int i;
	if(R==-1){
		printf("Queue Empty!\n");
		return;
	}
	for(i=F;i<=R;i++)
		printf("Data: %d\n", Q[i]);
}
void count(){
	int i;
	if(F==-1 && R==-1){
		printf("Queue Empty!\n");
	}
	else{
		i=F;
		while(i<=R)
		i++;
		printf("Count: %d\n", i);
}}
