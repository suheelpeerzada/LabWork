//stactic stack
#include<stdio.h>
#define max 7

int graph[max][max]={{0,1,0,1,0,0,0},
					 {1,0,1,1,0,1,1},
					 {0,1,0,1,0,1,0},
					 {1,1,1,0,1,0,0},
					 {0,0,0,1,0,0,1},
					 {0,1,1,0,1,0,0},
					 {0,1,0,0,1,0,0}};
void push(int);
void pop();
int stack[max] = {-1,-1,-1,-1,-1,-1,-1};
int top = -1;

void main(){
	int node,j,i=1;
	int stat[max] = {1,1,1,1,1,1,1};
	
	printf("Enter node:\t");
	scanf("%d", &node);
	
	printf("%d ", node);
	
	while(i<=max && top>=0){
		for(j=0;j<max;j++){
			if(graph[node][j] == 1 && stat[j] != 0){
				stat[node] = 0;
				node = j;
				push(node);
				break;
			}
			if(top -1)
			break;
			pop();
		}
		i++;
	}
}
void push(int node){
		top++;
		stack[top] = node;
		printf("%d ", node);
}
void pop(){
	top--;
}
