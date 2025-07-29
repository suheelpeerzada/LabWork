#include<stdio.h>
#include<string.h>

main(){
	int i;
	char s = 'w', x, y[20];
	x = toupper(s);
	printf("%c", x);
	scanf("%s", &y);
	printf("%s", y);
	i = strlen(y);
	printf("%d", i);
}
