#include<stdio.h>
main()
{
	struct details
	{
		double aadharno;
		double phnumber;
	};
	struct details data;
	printf("Enter Aadhar number;");
	scanf("%lf", &data.aadharno);
	printf("\nEnter Phone number;");
	scanf("%lf", &data.phnumber);
	printf("Aadhar Number:\t %lf\n Phone Number:\t %lf", data.aadharno, data.phnumber);
}
