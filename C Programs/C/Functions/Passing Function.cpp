#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int d, x(int, int), y(), z();
	d= x(z(), y());
	printf("\n z()-y()= %d", d);
	return 0;
}
x(int a, int b)
{
	return (abs(a-b));
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
