#include<stdio.h>
#include<stdlib.h>

void insertsll();
void insertback();
void display();
void delfront();
void delback();
void delran();

struct sll{
	int data;
	struct sll *l;
};
struct sll *start=NULL;

int main(){
	int c;
	printf("Enter:\n");
	while(1){
		printf("1) Insert\n2) Insert at back\n3) Display\n4) Delete front\n5) Delete back\n6) Delete by data\n");
		scanf("%d", &c);
		switch(c){
			case 1:
				insertsll();
				break;
			case 2:
				insertback();
				break;
			case 3:
				display();
				break;
			case 4:
				delfront();
				break;
			case 5:
				delback();
				break;
			case 6:
				delran();
				break;
			default:
				printf("Wrong choice entered!\n");
		}
	}
}
void insertsll(){
	struct sll *p, *q;
	p=(struct sll *)malloc(sizeof(struct sll));
	if(p==NULL){
		printf("Overflow!\n");
		return;
	}
	printf("Enter data:\n");
	scanf("%d",&p->data);
	p->l=NULL;
	if(start==NULL){
		start=p;
	}
	else{
		q=start;
		while(q->l!=NULL)
		q=q->l;
		q->l=p;
	}
	return;
}
void insertback(){
	struct sll *p, *q;
	p=(struct sll *)malloc(sizeof(struct sll));
	if(p==NULL){
		printf("Overflow!\n");
		return;
	}
	printf("Enter data:\n");
	scanf("%d",&p->data);
	p->l=NULL;
	if(start==NULL)
	insertsll();
	else{
		q=start;
		start=p;
		p->l=q;
	}
	return;
}
void display(){
	struct sll *p;
	if(start==NULL){
		printf("List is empty!\n");
		return;
	}
	p=start;
	while(p->l!=NULL){
		printf("Data: %d	Link: %u\n", p->data, p->l);
		p=p->l;
	}
	printf("Data: %d	Link: %u\n", p->data, p->l);
	return;
}
void delfront(){
	struct sll *p, *q;
	if(start==NULL){
		printf("List is empty!\n");
		return;
	}
	p=start;
	q=start;
	while(p->l!=NULL)
	p=p->l;
	while(q->l!=p)
	q=q->l;
	q->l=NULL;
	return;
}
void delback(){
	if(start==NULL){
		printf("List is empty!\n");
		return;
	}
	start=start->l;
}
void delran(){
	int d;
	struct sll *p, *q;
	if(start==NULL){
		printf("List is empty!\n");
		return;
	}
	printf("Enter data to be deleted:\n");
	display();
	scanf("%d", &d);
	q=start;
	p=start->l;
	if(d==start->data){
		start=start->l;
		return;
	}
	while(p->l!=NULL){
		if(p->data==d){
			q->l=p->l;
			printf("Done!\n");
			return;
		}
		p=p->l;
		q=q->l;
	}
	printf("Not Found!\n");
}