#include<stdio.h>
#include<string.h>

int romantoint(char c){
	c = toupper(c);
	switch(c){
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'M':
			return 1000;
		default:
			return -1;
	}
}

int main(){
	char c[10]; int s;
	printf("Enter Roman Number: \n");
	scanf("%s", c);
	int i = sizeof(c)/sizeof(c[0]) - 1;
	int num = c[i];
	while(i >= 0){
		if(romantoint(i) < 0){
			printf("Invalid Roman Numeral entered!\n");
			break;
		}
		else if(romantoint(i) > romantoint(i-1))
			num-= romantoint(i-1);
		else if(romantoint(i) < romantoint(i-1))
			num+=romantoint(i-1);
	}
	
	printf("%d", num);
}
