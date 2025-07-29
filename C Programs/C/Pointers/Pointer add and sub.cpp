#include<stdio.h>
main()
{
	int x, y, add, sub, change(int*, int*, int*, int*);
	printf("Enter the values for X and Y\n");
	scanf("%d %d", &x, &y);
	change(&x, &y, &add, &sub);
	printf("Addition: %d\n", add);
	printf("Subtraction: %d\n", sub);
}
change(int *a, int *b, int *c, int *d)
{
	*c=*a+*b;
	*d=*a-*b;
	return(*c, *d);
}
