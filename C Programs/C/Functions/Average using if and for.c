//Average of multiple numbers
#include<stdio.h>
main()
{
	int n,num,i,sum=0;
	float avg;
	printf("PROGRAM TO GET AVERAGE OF MULTIPLE NUMBERS\n");
	printf("Enter total no of numbers\n");
	scanf("%d",&n);
	if (i=1)
	 {
	 printf("Enter the 1st  number\n");
	 scanf("%d",&num);
	 sum=sum+num;
	 i++;
     }
     if(n!=1)
	 {
	 if(i=2)
	 {
	 printf("Enter the 2nd  number\n");
	 scanf("%d",&num);
	 sum=sum+num;
	 i++;
	 }
	 if(n!=2){
	 if(i=3)
	 {
	 printf("Enter the 3rd  number\n");
	 scanf("%d",&num);
	 sum=sum+num;
	 i++;
	 }
	 }}
	 for(i=4;i<=n;i++)
	 {
	 printf("Enter the %dth number\n",i);
	 scanf("%d",&num);
	 sum=sum+num; 
	 }
	 avg=sum/n;
	 printf("\nAverage=%f",avg);
   
}
