#include<stdio.h>
main()
{
	int i;
	char m[6];
	printf("Enter your first name:\t");
	scanf("%s", &m);
	printf("In Lowercase:\n");
	for(i=0;i<6;i++)
	printf("%c = %d \n", m[i], m[i]);
	printf("In Uppercase:\n");
	for(i=0;i<6;i++)
	{
	if(m[i]>96 && m[i]<123)
	{
	m[i]=m[i]-32;
	printf("%c = %d \n", m[i], m[i]);
    }
	else
	printf("%c = %d \n", m[i]);
	}
}
