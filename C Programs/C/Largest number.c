#include<stdio.h>
main()
{
	int i, j, n, m=0;
	printf("Enter total no of numbers:");
	scanf("%d", &n);
	int a[n];
	printf("Enter %d numbers:", n);
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	m=a[0];
	for(i=0;i<n;i++)
	{
		for(j=i+1;i<n;i++)
		if(a[i]>a[j])
		{
			m=a[i];
			a[i]=a[j];
			a[i]=m;
		}
	}
	printf("The largest number is %d", m);
}
