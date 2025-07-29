#include<stdio.h>
main()
{
	int x, y, swap(int*, int*);
	printf("enter values for A and B: ");
	scanf("%d%d", &x,&y);
	printf("A=%d\t B=%d", x, y);
	swap(&x, &y);
}
swap(int *x, int *y)
{
	int k;
	k=*x;
	*x=*y;
	*y=k;
	printf("A=%d\t B=%d\n", *x, *y);
}
