#include<stdio.h>
#include<stdlib.h>

void insertsll();
void displaysll();
void selectsll();
void myfunction(struct stk *s, struct stk *p, struct stk *d);
void modifysll(struct stk *s, struct stk *p, struct stk *d);
void deletesll(struct stk *s, struct stk *p, struct stk *d);

struct stk{
	int data;
	struct stk *l;
};

struct stk *start;

int main(){
	int c;
	printf("LINKED LIST!!\n");
	printf("Enter:\n");
	while(1){
		printf("1)\tInsert Data\n2)\tDisplay Elements\n3)\tSelect Element\n");
		scanf("%d", &c);
		switch(c){
			case 1:
				insertsll();
				break;
			case 2:
				displaysll();
				break;
			case 3:
				selectsll();
				break;
		}
	}

	return 0;
}

void insertsll(){
	int d;
	struct stk *p, *q;
	p=(struct stk *)malloc(sizeof(struct stk));
	if(p==NULL){
		printf("Memory Overflow!");
		return;
	}
	printf("Enter data:\n");
	scanf("%d", &d);
	p->data=d;
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

void displaysll(){
	struct stk *r;
	r=start;
	int i = 1;
	if(start==NULL){
		printf("Empty List!\n");
		return;
	}
	printf("List of elements:\n");
	while(r!=NULL){
		printf("%d) Data: %d \t LinkPart: %u\n", i, r->data, r->l);
		r=r->l;
		i++;
	}
}

void selectsll(){
	int y;
	struct stk *s, *p, *d;
	if(start==NULL){
		printf("Empty List!\n");
		return;
	}
	s=start;
	p=start;
	d=start;
	if(start==NULL){
		printf("Empty List!\n");
		return;
	}
	printf("Select any element:\n");
	displaysll();
	scanf("%d", &y);
	while(s!=NULL){
		if(s->data==y){
			printf("Selected!\n");
			myfunction(s, p, d);
			break;
		}
		p=s;
		s=s->l;
		if(s!=NULL)
			d=s->l;
	}
}

void myfunction(struct stk *s, struct stk *p, struct stk *d){
	int z;
	printf("Which function to perform?\n");
	printf("1)\tModify\n2)\tDelete\n3)\tInsert after\n4)\tInsert before\n");
	scanf("%d", &z);
	switch(z){
		case 1:
			modifysll(s, p, d);
			break;
		case 2:
			deletesll(s, p, d);
			break;
		case 3:
			//addfront();
			break;
		case 4:
			//addback();
			break;
	}
	return;
}

void modifysll(struct stk *s, struct stk *p, struct stk *d){
	printf("Enter new data:\n");
	scanf("%d", &(s->data));
	printf("Done!\n");
	return;
}

void deletesll(struct stk *s, struct stk *p, struct stk *d){
	if(s->l!=NULL)
		p->l=d;
	else
		p->l=NULL;
	printf("Modified!\n");
	return;
}

