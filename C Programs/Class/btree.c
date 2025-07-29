#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct btree{
	struct btree *lt;
	int data;
	struct btree *rt;
};
struct btree *root;

void insert(){
	struct btree *p, *q;
	char dir[20];
	int i=0;
	
	p = (struct btree *)malloc(sizeof(struct btree));
	
	if(p == NULL){
		printf("Memory overflow!\n");
		return;
	}
	printf("Enter data:\t");
	scanf("%d", &p->data);
	p->lt = NULL; p->rt = NULL;
	
	if(root == NULL){
		root = p;
	}
	else{
		q = root;
		
		printf("Enter direction:\t");
		scanf("%s", dir);
		
		strupr(dir);
		
		for(i=0;i<strlen(dir);i++){
			printf("%c ", dir[i]);
		}
		
		while(i < strlen(dir) && q != NULL){
			if(dir[i] == 'L'){
				q = q->lt;
			}
			else if(dir[i] == 'R'){
				q = q->rt;
			}
			else{
			printf("Invalid direction!\n");
			return;
			}
			i++;
		}
		if(dir[i-1] == 'L'){
			q->lt = p;
		}
		else if(dir[i-1] == 'R'){
			q->rt = p;
		}
	}
}

void inorder(struct btree *z){
	if(z != NULL){
		inorder(z->lt);
		printf("%d ", z->data);
		inorder(z->rt);
}}

int main(){
	int choice;
	struct btree *z;
	while(1){
		printf("\n1. Insert\n2. Display\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				insert();
				break;
//			case 2:
//				deletesll();
//				break;
			case 2:
				z = root;
				inorder(z); // for recursion
				break;
			default:
				printf("Invalid case selected!\n");
				break;
		}
	}
	return 0;
}
