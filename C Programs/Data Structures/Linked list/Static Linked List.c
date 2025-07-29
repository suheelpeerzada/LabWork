#include<stdio.h>
#include<stdlib.h>
#define size 5
void push();
void display();
void pop();

int x,i, a[size], n, count=0;

int main(){
	printf("LINKED LIST\n");
	printf("Enter:\n");
	while(1){
	printf("\n1) Add element\n2) Pop\n3) Display elements\n4) Exit.\n");
	scanf("%d", &x);
	switch(x){
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
			exit(0);
	}
}}
void push(){
	if(count=size){
		printf("List is Full!");
		return;
	}
	printf("Enter element:\n");
	scanf("%d", &n);
	for(i=0;i<size;i++){
		if(a[i]!='\0')
		a[i]=n;
		count++;
	}
}
void display(){
	for(i=0;i<size;i++){
		if(a[i]!='\0'){
		printf("%d ", a[i]);
		return;
		}}
		printf("Linked list is empty!\n");
}
void pop(){
	int num;
	if(count==0){
		printf("List empty!\n");
		return;
	}
	printf("Which number?\n");
	display();
	scanf("%d", &num);
	i=0;
	while(a[i]!=num)
	i++;
	if(num==a[i]){
	printf("Popped: %d", i);
	a[i]='\0';
}
else printf("Invalid number!\n");	
}
