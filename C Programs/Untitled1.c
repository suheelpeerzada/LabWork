#include<stdio.h>

void main(){
	int i=0;
	while(1 && printf("hi")){
		printf("hey");
		i++;
		if(i > 5)
			break;
	}
}
