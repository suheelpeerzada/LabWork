#include<stdio.h>
#include<string.h>
main(){
	int i, j,k=0;
	char s[]="suheel", t[]="peerzada", a[10];
	j=strlen(s)+strlen(t);
	for(i=0;i<strlen(s);i++)
	a[i]=s[i];
	for(i=strlen(s);i<j;i++){
	a[i]=t[k];
	k++;
}
	printf("%s", a);
}
