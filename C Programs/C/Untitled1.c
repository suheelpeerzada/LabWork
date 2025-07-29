#include<stdio.h>
main()
{
	int n, x=0, y=1, i, z;
	printf("Enter numbers reqd: ");
	scanf("%d", &n);
	printf("%d %d ", x, y);
	for(i=2;i<n;i++)
	{
		z=x+y;
		printf("%d ", z);
		x=y;
		y=z;
	}
}
