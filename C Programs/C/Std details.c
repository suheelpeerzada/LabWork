#include<stdio.h>
main()
{
	int i, n;
	printf("Enter total no of students: ");
	scanf("%d", &n);
	struct details
	{
		char name[10];
		int rollno;
		float percentage;
	};
	struct details std[n];
	for(i=0;i<n;i++)
	{
	printf("Enter name: ");
	scanf("%s", &std[i].name);
	printf("Enter roll no: ");
	scanf("%d", &std[i].rollno);
	printf("Enter percentage: ");
	scanf("%f", &std[i].percentage);
    }
    printf("Name\t Rollno\t Percentage\n");
    for(i=0;i<n;i++)
    printf("%s\t%d\t%f\n", std[i].name, std[i].rollno, std[i].percentage);
}
