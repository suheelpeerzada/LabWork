#include<stdio.h>
#define max 10
int main(){
	int a[max], top=-1, isEmpty = 1, choice;
	
	while(1){
		printf("1. Push\n2. Pop\n3. Peek\n");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				if(top == max-1)
					printf("Stack Overflow!\n");
				else{
					printf("Enter number\n");
					top++;
					scanf("%d", &a[top]);
					printf("Done!");
					isEmpty = 0;
				}
				break;
			case 2:
				if(isEmpty == 1)
					printf("Stack is Empty!\n");
				else{
					printf("Value removed: %d\n", a[top]);
					top--;
				}
				if(top==-1)
				isEmpty = 1;
				break;
			case 3:
				if(isEmpty == 1)
					printf("Stack is Empty!\n");
				else{
					printf("Peek value: %d\n", a[top]);
				}
				break;
			default:
				printf("Invalid choice!\n");
		}	
	}
}
