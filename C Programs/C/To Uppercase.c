#include<stdio.h>
main()
{
	int i, n;
	char s[n];
	printf("Enter total letter in your name:\t");
	scanf("%d", &n);
	printf("Enter Name\n");
	for(i=0;i<n;i++)
	{
	scanf("%c",&s[i]);
	if(isalpha(i))
	continue;
	else
	{printf("%c\t", toupper(s[i]));
	printf("%d\n", toupper(s[i]));
	}
}}
