#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int d, x(int, int), y(), z();
	d= x(z(), y());
	return 0;
}
x(int a, int b)
{
	int k;
	k=abs(b-a);
	printf("%d-%d=%d", b, a, k);
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
