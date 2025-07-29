//Average of multiple numbers
#include<stdio.h>
main()
{
	int n, num, i=0, sum=0;
	float avg;
	printf("Enter total no of numbers\n");
	scanf("%d",&n);
	while(i<n)
	{
	 printf("Enter the number");
	 scanf("%d",&num);
	 sum=sum+num;
	 i++;
	}
	avg=sum/n;
	printf("sum=%d\nAverage=%f",sum,avg);
}
