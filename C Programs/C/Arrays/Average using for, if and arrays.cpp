//Average using for, if and arrays.
#include<stdio.h>
main()
{
	int n,num,i,sum=0;
	float avg=0.0;
	printf("Enter total no of numbers\n");
	scanf("%d",&n);
	int arr[n];
	if(i=1)
	{
		printf("Enter the 1st number\n");
		scanf("%d",&num);
		sum=sum+num;
		i++;
	}
	if(n!=1)
	{
		if(i=2)
		{
			printf("Enter 2nd number\n");
			scanf("%d",&num);
			sum=sum+num;
			i++;
		}
		if(n!=2)
		{
			if(i=3)
			{
				printf("Enter 3rd number\n");
				scanf("%d",&num);
				sum=sum+num;
				i++;
			}
		}
		}
		for(i=4;i<=n;i++)
		{
			printf("Enter %dth number\n",i);
			scanf("%d",&num);
			sum=sum+num;
		}
		avg=(int)sum/n;
		printf("Average=%f",avg);
	}
