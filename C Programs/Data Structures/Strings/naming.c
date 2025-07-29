#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int i=0, c=0, j=0, k=0, o=0,p=0;
	char s[10], *u, *l;
	printf("Enter String:\t");
	scanf("%s", &s);
	printf("Individual letters are:\n");
	while(s[i]!='\0'){
	printf("%c\n", s[i]);
	if(s[i]<97){
	o++;
}
    
	if(s[i]>=97){
	p++;
}
	c++;i++;
}
    printf("Number of letters: %d\n", c);
    u=(char *)malloc(sizeof(char)* o);
    l=(char *)malloc(sizeof(char)* p);
    i=0;
    while(s[i]!='\0'){
    if(s[i]<97){
    u[j]=s[i];
    j++;
    i++;
}
    if(s[i]>=97){
    l[k]=s[i];
    k++;
    i++;
}
}
	if(u!=NULL){
	printf("UpperCase letters are:\n");
	for(i=0;i<=o;i++){
	printf("%c\n", u[i]);
	}
}
	if(l!=NULL){
	printf("LowerCase letters are:\n");
	for(i=0;i<=p;i++){
	 printf("%c\n", l[i]);
}}
free(u);
free(l);
printf("Done!");
}
