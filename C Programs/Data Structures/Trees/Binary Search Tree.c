#include<stdio.h>
#include<stdlib.h>

struct bst{
	struct bst *left;
	int data;
	struct bst *right;
};
struct bst *root=NULL;

void insert_bst();
void delete_bst();
void inorder(struct bst *);
void preorder(struct bst *);
void postorder(struct bst *);
void search_bst(int, struct bst *, struct bst **);

void main(){
	int d;
	printf("Enter :\n");
	while(1){
		printf("\n1- Insert \n2- Delete \n3- Inorder \n4- Preorder \n5- Postorder \n6- Modify:\t");
		scanf("%d",&d);
		switch(d){
			case 1:
				insert_bst();
				break;
			case 2:
				if(root==NULL)
				printf("Tree is empty\n");
				else
				delete_bst();
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
			default:
				printf("Wrong choice entered!\n");
				break;
		}
	}
}
void insert_bst(){
	struct bst *p, *q, *r=NULL;
	p=(struct bst *)malloc(sizeof(struct bst));
	q=root;
	if(p==NULL){
		printf("Memory Overflow!\n");
		return;
	}
	printf("Enter data:\t");
	scanf("%d", &p->data);
	p->left = p->right = NULL;
	if(root==NULL){
		root=p;
		return;
	}
	while(q!=NULL){
		r=q;
		if(p->data>q->data){
			q=q->right;
		}
		else if(p->data<q->data){
			q=q->left;
		}
		else{
			printf("Data Already Exists!\n");
			return;
		}
	}
	if(p->data>r->data)
	r->right=p;
	else
	r->left=p;
}
void delete_bst(int d, struct bst** root) {
    struct bst *q, *r, *p;
    q = *root;
    r = NULL;
    
    // Search for the node with value d and update r
    search_bst(d, *root, &r);
    
    if (q == NULL) {
        printf("Data not found!\n");
        return;
    }
    
    if (q->left == NULL && q->right == NULL) {
        // Case 1: Node has no children (leaf node)
        if (r == NULL) {
            *root = NULL; // The root node is the only node in the tree
        } else if (q->data < r->data) {
            r->left = NULL;
        } else {
            r->right = NULL;
        }
        free(q);
    } else if (q->left != NULL && q->right != NULL) {
        // Case 3: Node has two children
        p = q->right;
        while (p->left != NULL) {
            p = p->left;
        }
        q->data = p->data;
        delete_bst(p->data, &q->right); // Recursively delete the duplicate value
    } else {
        // Case 2: Node has one child
        p = (q->left != NULL) ? q->left : q->right;
        if (r == NULL) {
            *root = p; // The node to delete is the root
        } else if (q->data < r->data) {
            r->left = p;
        } else {
            r->right = p;
        }
        free(q);
    }
}

void inorder(struct bst *root){
		inorder(root->left);
		printf("%d", root->data);
		inorder(root->right);
}
void preorder(struct bst *root){
		printf("%d", root->data);
		inorder(root->left);
		inorder(root->right);
}
void postorder(struct bst *root){
		inorder(root->left);
		inorder(root->right);
		printf("%d", root->data);
}
void search_bst(int d, struct bst* root, struct bst** parent) {
    struct bst* current = root;
    *parent = NULL;  // Initialize parent pointer to NULL
    
    while (current != NULL) {
        if (d == current->data) {
            return current;  // Element found
        } else if (d < current->data) {
            *parent = current;
            current = current->left;  // Move to the left subtree
        } else {
            *parent = current;
            current = current->right;  // Move to the right subtree
        }
    }
    
    return NULL;  // Element not found
}

