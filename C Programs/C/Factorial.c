#include<stdio.h>
main()
{
	int m, n, i;
	unsigned int f;
	printf("Enter the number for factorial:\t");
	scanf("%d", &n);
	m=n;
	if(n==0 || n==1)
	printf("Fact=1");
	else if(n<0)
	printf("Invalid");
	else
	for(i=1;i<n;i++)
	{
	f=m*i;
	m=f;
	}
	printf("Fact=%u", f);
}

