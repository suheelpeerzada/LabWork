//Average using arrays
#include<stdio.h>
main()
{
	int num, sum, size, i;
	float avg;
	printf("Enter the array size\n");
	scanf("%d",&size);
	int arr[size];
	for(i=1;i<=size;i++)
	{
		printf("Enter the array elements:\n");
		scanf("%d",&arr[i]);
	}
	sum=sum+arr[i];
	avg=sum/size;
	printf("Average=%f",avg);
}
