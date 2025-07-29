#include<stdio.h>
#include<string.h>

int main(){
	char s[10] = "suHeel";
	char dir[10];
	int i;
	for(i=0;i<strlen(s);i++)
		dir[i] = strupr((int *)s);
//	dir = strupr(s);
	printf("%s", s);
}
