

#include<stdio.h>
#define max 6

int visited[max] = {0,0,0,0,0,0};
int graph[max][max] = {{0,1,0,0,1,0},
						{1,0,1,1,0,1},
						{0,1,0,0,0,1},
						{0,1,0,0,1,0},
						{1,0,0,1,0,0},
						{0,1,1,1,0,0}
						};
int stack[max], result[max], top = -1;

void push(int n){
	top++;
	stack[top] = n;
	result[top] = n;
	visited[n] = 1;
}

void pop(){
	top--;
}


void dfs(int source){
	int i;
	push(source);
	while(1){
		for(i=0;i<max;i++){
			if(graph[source][i] == 1 && !visited[i]){
				push(i);
				source = stack[top];
				i=0;
			}
		}
		pop();
		source = stack[top];
		if(top == -1){
			break;
		}
	}
}
						
int main(){
	int x, y;
	printf("Enter source:\n");
	scanf("%d", &y);
	
	for(x=0;x<max;x++){
		stack[x] = -1;
		result[x] = -1;
	}
	
	if(y<0 || y >= max){
		printf("Invalid source:\n");
	}
	else{
		dfs(y);
		for(x=0;x<max;x++){
			if(result[x] != -1)
			printf("%d ", result[x]);
		}
	}
	
	return 0;
}
