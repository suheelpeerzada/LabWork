#include<stdio.h>
#include<string.h>
main(){
	int i;
	char s[]="suheel", a[10], x[10];
//	for(i=0;i<strlen(s);i++)
//	a[i]=s[i];
//	printf("Copied elements are: %s", a);
	strcpy(x,s);
	printf("Copied elements are: %s", x);
}
