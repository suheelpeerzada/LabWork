#include<stdio.h>
#include<string.h>
main(){
	 char a[10];
	 int x,i;
	 printf("Enter any string:\t");
	 scanf("%s", &a);
	 for(i=0;i<strlen(a);i++){
	 	if(a[i]<=97)
	 	a[i]+=32;
	 	else
	 	a[i]-=32;
	 }
	 printf("Inverted: %s", a);
}
