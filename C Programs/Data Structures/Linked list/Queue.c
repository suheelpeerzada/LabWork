#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();
void count();

struct qll{
	int data;
	struct qll *l;
};
struct qll *start=NULL, *end=NULL;
int main(){
	int x;
	printf("Queue!\n");
	printf("Enter:\n");
	while(1){
		printf("1) Enqueue\n2) Dequeve\n3) Display\n4) Count\n");
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
				printf("Wrong Choice\n");
		}
	}
}
void enqueue(){
	struct qll *p, *q;
	int n;
	p=(struct qll *)malloc(sizeof(struct qll));
	if(p==NULL){
		printf("Memory Overflow!\n");
		return;
	}
	printf("Enter data:\n");
	scanf("%d", &n);
	p->data=n;
	p->l=NULL;
	if(start==NULL){
		start=p;
		end=p;
	}
	else{
		q=end;
		q->l=p;
		end=p;
	}
}
void display(){
	struct qll *p;
	if(start==NULL){
		printf("Queue Empty!\n");
		return;
	}
	else{
		p=start;
		while(p->l!=NULL){
			printf("Data: %d\tLink: %u\n", p->data,p->l);
			p=p->l;
		}
		printf("Data: %d\tLink: %u\n", p->data,p->l);
	}
}
void dequeue(){
	if(start==NULL){
		printf("Queue Empty!\n");
		return;
	}
	start=start->l;
	printf("Done!\n");
}
void count(){
	int i=1;
	struct qll *p;
	p=start;
	while(p->l!=NULL){
		i++;
		p=p->l;
	}
	printf("Number of values: %d\n", i);
}
