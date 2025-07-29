#include<stdio.h>
factorial();
main()
{
	int n, x;
	printf("Enter the number\n");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Please enter a positive number\n");
	}
	else
	{
	x=factorial(n);
	printf("The factorial of %d is %d", n, x);
	}
}
factorial(int n)
{
	int fact;
	if(n==1 || n==0)
	{
		return (1);
	}
	else
	fact=n*factorial(n-1);
	return (fact);
}
