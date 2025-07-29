#include<stdio.h>
main()
{
	int i, n, area;
	int cir[n];
	printf("Enter the number of circles\n");
	scanf("%d", &n);
	printf("Enter the radii of circles:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &cir[i]);
	}
	for(i=0;i<n;i++)
	{
		area=3.14*cir[i]*cir[i];
		printf("Area:%d", area);
	}
}
