#include<stdio.h>
#include<stdlib.h>

struct bst{
	struct bst *ll;
	int data;
	struct bst *rl;
};
struct bst *root = NULL,  *prev = NULL, *cur = NULL;

void insertbst(){
	struct bst *p;
	
	p = (struct bst *)malloc(sizeof(struct bst));
	
	if(p==NULL){
		printf("Memory Overflow!\n");
		return;
	}
	
	printf("Enter data:\t");
	scanf("%d", &p->data);
	
	p->ll = NULL; p->rl = NULL;
	
	if(root==NULL){
		root = p;
	}
	else{
		cur = root;
		
		while(cur!=NULL){
			prev = cur;
			if(p->data > cur->data){
				cur=cur->rl;
			}
			else if(p->data < cur->data){
				cur=cur->ll;
			}
			else{
				printf("Data Already exists!\n");
				return;
			}
		}
		if(p->data > prev->data){
			prev->rl = p;
		}
		else
			prev->ll = p;
	}
}

void searchbst(int x, struct bst *cur, struct bst *prev){
	if(cur!=NULL){
		if(cur->data == x){
			return;
		}
		searchbst(x, cur->ll, cur);
		searchbst(x, cur->rl, cur);
	}
}

void inorder(struct bst *z){
	if(z!=NULL){
		inorder(z->ll);
		printf("%d ", z->data);
		inorder(z->rl);
	}
}

void deletebst(){
	int x;
	struct bst *temp, *q;
	
	inorder(root);
	
	printf("\nEnter data to be deleted!\n");
	scanf("%d", &x);
	
	cur = root;
	
	if(root->data == x){
		if(root->ll == NULL && root->rl == NULL){
			root = NULL;
		}
		else if(root->ll == NULL && root->rl != NULL){
			root = root->rl;
		}
		else if(root->rl == NULL && root->ll != NULL){
			root = root->ll;
		}
		else{
			temp = root->rl;
			root = root->ll;
			q = root;
			while(temp->data > q->data && q->rl != NULL){
				q = q->rl;
			}
			q->rl = temp;
		}
	}
	
	searchbst(x,cur, prev);
	
	if(cur->data == x){
		if(cur->ll == NULL && cur->rl == NULL){
			if(cur->data > prev->data){
				prev->rl = NULL;
			}
			else{
				prev->ll = NULL;
			}
		}
		else if(cur->ll == NULL){
			if(cur->data > prev->data){
				prev->rl = cur->rl;
			}
			else{
				prev->ll = cur->rl;
			}
		}
		else if(cur->rl == NULL){
			if(cur->data > prev->data){
				prev->rl = cur->ll;
			}
			else{
				prev->ll = cur->ll;
			}
		}
		else{
			temp = cur->ll;
			if(cur->data > prev->data){
				prev->rl = cur->ll;
			}
			else{
				prev->ll = cur->ll;
			}
			q = prev;
			while(temp->data > q->data && q->rl != NULL){
				q = q->rl;
			}
			q->rl = temp;
		}
	}
	else{
		printf("Not found!\n");
		return;
	}
	
}


int main(){
	int choice;
	struct bst *z;
	while(1){
		printf("\n1. Insert\n2. Delete\n3. Display\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				insertbst();
				break;
			case 2:
				deletebst();
				break;
			case 3:
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
