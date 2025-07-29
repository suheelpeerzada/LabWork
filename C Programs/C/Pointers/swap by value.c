#include<stdio.h>
int swap(int, int);
main()
{
	int x, y;
	printf("enter values for A and B: ");
	scanf("%d%d", &x,&y);
	printf("Before swap:\n A=%d\t B=%d\n", x, y);
	swap(x, y);
}
swap(int x, int y)
{
	int k;
	k=x;
	x=y;
	y=k;
	printf("After swap:\n A=%d\t B=%d\n", x, y);
}
