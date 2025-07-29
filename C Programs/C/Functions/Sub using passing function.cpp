#include<stdio.h>
main()
{
	int d, x(int, int), y(), z();
	d= x(z(), y());
	printf("\n z()-y()= %d", d);
	return 0;
}
x(int a, int b)
{
	int k;
	k=a-b;
	if(b>a)
	{
		k=-k;
		return k;
	}
	else return(k);
}
y()
{
	int y;
	printf("\n Enter first number:");
	scanf("%d", &y);
	return(y);
}
z()
{
	int z;
	printf("\n Enter second number");
	scanf("%d", &z);
	return(z);
}
