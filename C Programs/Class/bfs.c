//bfs

#include<stdio.h>
#define max 6

int queue[max], result[max], front = -1, rear = -1;
int visited[max] = {0,0,0,0,0,0};
int graph[max][max] = {{0,1,0,0,1,0},
						{1,0,1,1,0,1},
						{0,1,0,0,0,1},
						{0,1,0,0,1,0},
						{1,0,0,1,0,0},
						{0,1,1,1,0,0}
						};
						

void enqueue(int n){
	if(front == -1){
		front++;
	}
	rear++;
	queue[rear] = n;
	result[rear] = n;
	visited[n] = 1;
}
void dequeue(){
	front++;
}
					
void bfs(int source){
	int i;
	enqueue(source);
	while(1){
		for(i=0;i<max;i++){
			if(graph[source][i] == 1 && !visited[i]){
				enqueue(i);
			}
		}
		dequeue();
		source = queue[front];
		if(front>rear){
			break;
		}
	}
}
						
int main(){
	int x, y;
	printf("Enter source:\n");
	scanf("%d", &y);
	
	for(x=0;x<max;x++){
		queue[x] = -1;
		result[x] = -1;
	}
	
	if(y<0 || y >= max){
		printf("Invalid source:\n");
	}
	else{
		bfs(y);
		for(x=0;x<max;x++){
			printf("%d ", result[x]);
		}
	}
	
	return 0;
}
