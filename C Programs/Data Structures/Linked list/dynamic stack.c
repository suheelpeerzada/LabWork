#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
struct stk{
	struct stk *l;
	int d;
};
struct stk *end=NULL;
int main(){
	int a;
	printf("DYNAMIC STACKING\n");
	do{
	printf("1:\tPush\n2:\tPop\n3:\tDisplay\n4:\tPeek\n5:\tExit\n");
	scanf("%d", &a);
		switch(a){
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
			case 5:
				exit(0);
			default:
				printf("Wrong number entered.\n");
				break;
		}
	}
	while(a!=0);
}
void push(){
	struct stk *p; int n;
	p=(struct stk *)malloc(sizeof(struct stk));
	if(p==NULL){
		printf("Stack Overflow!\n");
		return;
	}
	printf("Enter data:\n");
	scanf("%d", &n);
	p->d=n;
	p->l=NULL;
	if(end==NULL){
		end=p;
	}
	else{
	p->l=end;
	end=p;
}}
void display(){
	struct stk *p;
	if(end==NULL){
		printf("Stack is empty!\n");
		return;
	}
	p=end;
	while(p->l!=NULL){
		printf("Data: %d\tLink: %u\n", p->d, p->l);
		p=p->l;
	}
	printf("Data: %d\tLink: %u\n", p->d, p->l);
	printf("END.L= %u\n", end->l);
}
void pop(){
	struct stk *p;
	int x;
	if(end==NULL){
		printf("Stack is empty!\n");
		return;
	}
	end = end->l;
}
void peek(){
	printf("Topmost value is:\n");
    printf("Data: %d\tLink: %u\n", end->d, end->l);
}
