#include<stdio.h>
main()
{
	int n;
	float x, y, z;
	printf("Enter\n 1 for Add\n 2 for Sub\n 3 for Multiply\n 4 for Division\n");
	scanf("%d", &n);
	if(n<1 || n>4)
	{printf("Invalid number");
    return;}
	else
	printf("Enter two numbers:\t");
	scanf("%f%f", &x, &y);
	if(n==1)
	printf("Sum= %f", x+y);
	else if(n==2)
	printf("Sub= %f", x-y);
	else if(n==3)
	printf("Multiply= %f", x*y);
	else if(n==4)
	{
		if(y==0)
		printf("Cant divide by zero");
		else
	printf("Division= %f", x/y);}
}
