#include<stdio.h>
#include<stdlib.h>

struct dll{
	struct dll *lt;
	int data;
	struct dll *rt;
};
struct dll *start = NULL;

void insertatend(){
	struct dll *p, *q;
	
	p = (struct dll *)malloc(sizeof(struct dll));
	
	if(p == NULL){
		printf("Memory overflow!\n");
		return;
	}
	
	printf("Enter data:\t");
	scanf("%d", &p->data);
	p->lt = NULL; 
	p->rt= NULL;
	
	if(start == NULL){
		start = p;
	}
	else{
		q = start;
		while(q->rt != NULL)
			q = q->rt;
		q->rt = p;
		p->lt = q;
	}
}
void display(){
	struct dll *q;
	
	q = start;
	while(q->rt != NULL){
		q = q->rt;
	}
	while(q->lt != NULL){
		printf("%d ", q->data);
		q=q->lt;
	}
	printf("%d ", q->data);
}

int main(){
	int choice;
	while(1){
		printf("\n1. Insert\n2. Display\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				insertatend();
				break;
			case 2:
				display();
				break;
			default:
				printf("Invalid case selected!\n");
				break;
		}
	}
	return 0;
}
