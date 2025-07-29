#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("C:\\Users\\suhee\\Documents\\C Programs\\Data Structures\\CHAT GPT QUESTIONS\\program.txt", "r");
	while(!feof(fptr)){
		printf("hii\n");
	}
}
