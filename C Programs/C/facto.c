#include<stdio.h>
main()
{
	int n, i, m;
	printf("Enter the number for which factorial is reqd:");
	scanf("%d", &n);
	if(n==1||n==0)
	printf("Factorial= 1");
	else if(n<0)
	printf("Please enter a positive number.");
	else 
	{
	    for(i=n;i>0;i--)
	    {
	    	m=i*m;
		}
		printf("Factorial= %d", m);
	}
}
