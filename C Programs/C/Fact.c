#include<stdio.h>
int fact();
main()
{
	int n, m;
	printf("Enter the no: ");
	scanf("%d", &n);
	if(n==0 || n==1)
	printf("Factorial= 1");
	else if(n<0)
	printf("Please enter a positive number.");
	else
	{
	m=fact(n);
	printf("Factorial= %d", m);
    }
}
fact(int n)
{
	int f;
	if(n==1)
	return 1;
	else
	{
	f=n*fact(n-1);
	return(f);
	}
}
