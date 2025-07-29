#include<stdio.h>
#include<stdlib.h>

void insertsll();
void displaysll();
void selectsll();
void myfunction();
void modifysll();
void dellast();
//void addfront();
//void addback();

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
		default:
			printf("Wrong Choice Entered!\n");
	}	
	}
	
}
void insertsll(){
	int d;
	struct stk *p,*q;
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
	int i=1;
	if(start==NULL){
		printf("Empty List!\n");
		return;
	}
	while(r->l!=NULL){
		printf("%d) Data: %d \t LinkPart: %u\n", i, r->data, r->l);
		r=r->l;
		i++;
	}
	printf("%d) Data: %d \t LinkPart: %u\n", i, r->data, r->l);
}
void selectsll(){
	int y, z, k=0;
	struct stk *s, *p, *d;
	k++;
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
	if(s->l==NULL && s->data==y){
		printf("Selected!");
			printf("Which function to perform?\n");
        	printf("1)\tModify\n2)\tDelete\n3)\tInsert after\n4)\tInsert before\n\n");
        	scanf("%d", &z);
	if(z==1){
			printf("Enter new data:\n");
	        scanf("%d", s->data);
	        printf("Done!");
			return;
		}
	else if(z==2){
		start=NULL;
		printf("Deleted!\n");
		return;
	    }
	else if(z==3){
		//	addfront();
			return;
		}
	else if(z==4){
		//	addback();
			return;
		}
	else
			printf("Wrong Choice Entered!\n");
	}
	else{
	
		if(s->data==y){
			printf("Selected!");
			printf("Which function to perform?\n");
        	printf("1)\tModify\n2)\tDelete\n3)\tInsert after\n4)\tInsert before\n\n");
        	scanf("%d", &z);
    while(s->l!=NULL){
	if(z==1){
			printf("Enter new data:\n");
	        scanf("%d", s->data);
	        printf("Done!");
			return;
		}
	else if(z==2){
	        dellast();
	        return;
	    }
	else if(z==3){
		//	addfront();
			return;
		}
	else if(z==4){
		//	addback();
			return;
		}
	else
			printf("Wrong Choice Entered!\n");
	}}
		printf("Selected!");
		printf("Which function to perform?\n");
        	printf("1)\tModify\n2)\tDelete\n3)\tInsert after\n4)\tInsert before\n");
        	scanf("%d", &z);
	if(z==1){
			printf("Enter new data:\n");
	        scanf("%d", s->data);
	        printf("Done!");
			return;
		}
	else if(z==2){
	        dellast();
	        return;
	    }
	else if(z==3){
		//	addfront();
			return;
		}
	else if(z==4){
		//	addback();
			return;
		}
	else
			printf("Wrong Choice Entered!\n");
			if(k==2)
		p->l=s;
		s=s->l;
		if(s->l!=NULL)
		d=s->l;
			return;
}
}


