#include<stdio.h>
main()
{
	int i, j, n;
	printf("Enter base for pyramid:");
	scanf("%d", &n);
	if(n%2==0)
	printf("Please enter an odd number.");
	else 
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
		printf(" ");
	    }
	    for(j=1;j<=i;j++)
	    {
	    	printf("*");
		}
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		printf("\n");
	}
}
