#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct btree{
	struct btree *lt;
	int data;
	struct btree *rt;
};
struct btree *root=NULL, *pre=NULL, *cur=NULL, *v=NULL;

void insertbt();
void deletebt();
void inorder(struct btree *);
void preorder(struct btree *);
void postorder(struct btree *);
void last_element(struct btree *);
void searchbt(int, struct btree *);
void modify_btree();

int main(){
	int d;
	printf("Enter :\n");
	while(1){
		printf("\n1- Insert \n2- Delete \n3- Inorder \n4- Preorder \n5- Postorder \n6- Modify:\t");
		scanf("%d",&d);
		switch(d){
			case 1:
				insertbt();
				break;
			case 2:
				if(root==NULL)
				printf("Tree is empty\n");
				else
				deletebt();
				break;
			case 3:
				if(root==NULL)
				printf("Tree is empty\n");
				else
				inorder(root);
				break;
			case 4:
				if(root==NULL)
				printf("Tree is empty\n");
				else
				preorder(root);
				break;
			case 5:
				if(root==NULL)
				printf("Tree is empty\n");
				else
				postorder(root);
				break;
			case 6:
				modify_btree();
			default:
				printf("Wrong choice entered!\n");
				break;
		}
	}
}
void insertbt(){
	int i=0, inp, j;
	struct btree *p;
	char dir[20];
	p=(struct btree *)malloc(sizeof(struct btree));
	if(p==NULL){
		printf("Memory Overflow!\n");
		return;
	}
	printf("Enter data:\t");
	scanf("%d", &p->data);
	p->lt=NULL; p->rt=NULL;
	if(root==NULL)
		root=p;
	else{
		printf("Enter direction:\t");
		scanf("%s", dir);
		inp=strlen(dir);
		cur=root;
			for(i=0;i<inp;i++){
				dir[i]=toupper(dir[i]);
				if(cur==NULL){
					printf("Direction points to invalid node!\n");
					return;
				}
				if(dir[i]=='L'){
				pre=cur;
				cur=cur->lt;
				}
				else if(dir[i]=='R'){
				pre = cur;
				cur=cur->rt;	
				}
				else {
				printf("Invalid Direction Entered.\n");
				return;
				}
		}
		if(dir[i-1]=='L')
		pre->lt=p;
		else if(dir[i-1]=='R')
		pre->rt=p;
		else
		printf("Invalid Direction!\n");
	}
}
void inorder(struct btree *root){
	if(root!=NULL){
		inorder(root->lt);
		printf("%d", root->data);
		inorder(root->rt);
	}
}
void preorder(struct btree *root){
	if(root!=NULL){
		printf("%d", root->data);
		preorder(root->lt);
		preorder(root->rt);
	}
}
void postorder(struct btree *root){
	if(root!=NULL){
		postorder(root->lt);
		postorder(root->rt);
		printf("%d", root->data);
	}
}
void deletebt(){
	int d;
	struct btree *p;
	printf("Enter data to be deleted!\t");
	scanf("%d", &d);
	cur=root;
	searchbt(d, cur);
	if(cur->lt==NULL && cur->rt==NULL){
		if(pre->lt==cur)
		pre->lt=NULL;
		else
		pre->rt=NULL;
	}
	else if(cur->lt==NULL){
		if(pre->lt==cur)
		pre->lt=cur->rt;
		else
		pre->rt=cur->rt;
	}
	else if(cur->rt==NULL){
		if(pre->lt==cur)
		pre->lt=cur->lt;
		else
		pre->rt=cur->lt;
	}
	else if(cur->lt==NULL){
		if(pre->lt==cur)
		pre->lt=cur->rt;
		else
		pre->rt=cur->rt;
	}
	else if(cur->lt!=NULL && cur->rt!=NULL){
		if(pre->lt==cur)
		pre->lt=cur->lt;
		else
		v=cur;
		last_element(v);
		v->lt=cur->rt;
	}
}
void searchbt(int d, struct btree *cur){
	pre=cur;
	if(cur->data==d){
		return;
	}
	if(cur==NULL){
		printf("Not Found!\n");
		return;
	}
	searchbt(d, cur->lt);
	searchbt(d, cur->rt);
}
void last_element(struct btree *v){
	if(v==NULL)
	return;
	if(v->lt==NULL && v->rt== NULL)
	return;
	last_element(v->lt);
	last_element(v->rt);
}
void modify_btree(){
	struct btree *p, *q;
	int x, y;
	p=root;
	if(root==NULL){
		printf("Tree is empty!\n");
		return;
	}
	printf("Enter value to be replaced: \t");
	scanf("%d", &x);
	if(root->data==x){
		printf("Enter new value:\t");
		scanf("%d", &y);
		root->data=y;
		return;
	}
	searchbt(y, p);
	printf("Data found: %d", p->data);
	printf("Replaced with %d", y);
	p->data=y;
}
