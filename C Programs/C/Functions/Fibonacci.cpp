#include <stdio.h> //Fibonacci Series
main()
{
	int x, y, z, i, n;
	printf("Fibonacci Series\n");
	-printf("Enter the number of terms to which the series should go upto:\n");
	scanf("%d", &n);
	x=0;
	y=1;
	printf("%d%d", x, y);
	for(i=3;i<=n;i++)
	{
		z=x+y;
		printf("%d", z);
		x=y;
		y=z;
	}
}
