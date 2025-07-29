//Strings
#include<stdio.h>
#include<string.h>
main(){
	int i;
	char c='a', x[]={'s', 'a', 'm', 'm', 'e', 'y'}, s[]="suheel";
	printf("Character is: %c\n", c);
	printf("String is: %s\n", s);
	printf("Charray elements are:\n");
	while(x[i]!= '\0'){
	printf("%c\n", x[i]);
	i++;
}
}
