#include<stdio.h>
main()
{
	int n, i, m, mul=1, j;
	printf("Enter total number of elements:");
	scanf("%d", &n);
	int a[n];
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	for(i=0;i<n;i++)
	{
		mul=mul*a[i];
	}
	printf("Mul= %d", mul);
}
