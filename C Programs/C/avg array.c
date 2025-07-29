#include<stdio.h>
main(){
	int a[4]={2,4,6,8}, sum=0, i;
	int avg;
	for(i=0;i<4;i++)
	{
	sum+=a[i];
	}
	avg= sum/sizeof(a[]);
	printf("sum: %d avg: %d",sum, avg);
}
