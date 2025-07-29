#include<stdio.h>

void main(){
	char a[100];
	int n;
	int letterA=0, letterE=0, letterI=0, letterO=0, letterU=0;
	printf("Enter String\n");
	scanf("%s", a);
	for(n=0;n<sizeof(a)-1;n++){
		if(a[n] == 'a' || a[n] == 'A')
		letterA++;
		else if(a[n] == 'e' || a[n] == 'E')
		letterE++;
		else if(a[n] == 'i' || a[n] == 'I')
		letterI++;
		else if(a[n] == 'o' || a[n] == 'O')
		letterO++;
		else if(a[n] == 'u' || a[n] == 'U')
		letterU++;
	}
	printf("You entered: %s", a);
	printf("Number of vowels present:\t%d\n", letterA+letterE+letterI+letterO+letterU);
	printf("A:\t%d\nE:\t%d\nI:\t%d\nO:\t%d\nU:\t%d\n", letterA,letterE,letterI,letterO,letterU);
}
