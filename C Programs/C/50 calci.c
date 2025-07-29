#include<stdio.h>
main()
{
	int x[50], n, i;
	float z;
	printf("Enter\n 1 for Add\n 2 for Sub\n 3 for Multiply\n 4 for Division\n");
	scanf("%d", &n);
	if(n<1 || n>4)
	{printf("Invalid number");
    return;}
	else
	printf("Enter the numbers (max 50)\n");
	for(i=0;i<50;i++)
	{
		if(i==0)
		{printf("Enter 1st number\n");
		scanf("%d", x[i]);}
		else if(i==1)
		{printf("Enter 2nd number\n");
		scanf("%d", x[i]);}
		else if(i==2)
		{
			printf("Enter 3rd number or Enter a for answer\n");
			scanf("%d", &x[i]);
			if(n=='a')
			break;
		}
		else if(i>2)
		{
			printf("Enter 3rd number or Enter any letter for answer\n");
			scanf("%d", x[i]);
			if(n=='a')
			break;
		}
		
	}
	if(n==1)
	printf("Sum= %f", sumof(x));
	else if(n==2)
	printf("Sub= %f", minus(x));
	else if(n==3)
	printf("Multiply= %f", product(x));
	else if(n==4)
	{
		if(x==0)
		printf("Cant divide by zero");
		else
	printf("Division= %f", x[1]);}
}
