#include<stdio.h>
main()
{
	int i, n, j;
	printf("Enter total no of rows\t");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+i;j++)
		{
		printf(" ");
		}
		for(j=1;j<=n;j++)
		{
		printf("*");
		}
		printf("\n");
	}

}
