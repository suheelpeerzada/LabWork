#include<stdio.h>
#include<stdlib.h>

struct sll{
	int data;
	struct sll *link;
};
struct sll *start = NULL;

void insertatend(){
	struct sll *p, *q;
	
	p = (struct sll *)malloc(sizeof(struct sll));
	
	if(p == NULL){
		printf("memory overflow!\n");
		return;
	}
	
	printf("Enter data:\t");
	scanf("%d", &p->data);
	
	p->link = NULL;
	
	if(start == NULL){
		start = p;
	}
	else{
		q = start;
		while(q->link != NULL)
			q = q->link;
		q->link = p;
	}
}

void display(){
	struct sll *k;
	
	if(start == NULL){
		printf("list empty!\n");
		return;
	}
	k = start;
	
	while(k->link != NULL){
		printf("%d ", k->data);
		k = k->link;
	}
	printf("%d ", k->data);
}

void deletesll(){
	struct sll *prev, *cur;
	
	if(start == NULL){
		printf("List empty!\n");
		return;
	}
	if(start->link == NULL){
		start = NULL;
		return;
	}
	prev = start;
	cur = start->link;
	
	while(cur->link != NULL){
		prev = cur;
		cur = cur->link;
	}
	prev->link = NULL;
	
//	free(cur);
}

int main(){
	int choice;
	while(1){
		printf("\n1. Insert\n2. Delete\n3. Display\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				insertatend();
				break;
			case 2:
				deletesll();
				break;
			case 3:
				display();
				break;
			default:
				printf("Invalid case selected!\n");
				break;
		}
	}
	return 0;
}
