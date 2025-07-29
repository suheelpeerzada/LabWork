#include<stdio.h>

int arr[5][5];//graph
int v[5] = {0,0,0,0,0}; //turns 1 when a node is visited

void dfs(int i){
	int j;
	printf("%d", i);//prints current node
	for(j=0;j<5;j++){
		if(a[i][j]==1 && a[i][j]!=v[j]){//finds next node where value of visited is 0, if its 1 it has already been visited
			dfs(j); //goes to next unvisited node, using recursion ofc
		}
	}
} 
void main(){
	/*
		wont run, either add static graph above or write a function to take values from user. ;)
	*/
	dfs(0); //select starting node, here 0
}
