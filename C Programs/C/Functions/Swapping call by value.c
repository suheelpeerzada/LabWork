#include<stdio.h>
main()
{
	int x, y, swap(int, int);
	printf("Enter the value for X and Y\n");
	scanf("%d %d", &x, &y);
	swap(x, y);
	printf("X=%d Y=%d\n", x, y);
}
swap(int a, int b)
{
	int k;
	k=a;
	a=b;
	b=k;
	printf("X=%d Y=%d\n", a, b);
}
