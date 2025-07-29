#include<stdio.h>
#include<string.h>
main()
{
	int i, n, j=1;
	printf("Enter total number of books:\t");
	scanf("%d", &n);
	struct book
	{
		char bookname[15], author[15];
		int isbn, price;
	};
	struct book btech[n];
	for(i=0;i<n;i++, j++)
	{
	if(i==0)	
	printf("Enter values for the 1st book:\n");
	else if(i==1)
	printf("Enter values for the 2nd book:\n");
	else if(i==2)
	printf("Enter values for the 3rd book:\n");
	else if(i>2)
	printf("Enter values for the %dth book:\n", j);
	printf("Name:\t");
	scanf("%s", &btech[i].bookname);
	printf("Author:\t");
	scanf("%s", &btech[i].author);
	printf("Price:\t");
	scanf("%d", &btech[i].price);
	printf("ISBN:\t");
	scanf("%d", &btech[i].isbn);
	}
	printf("Name:\t\t Author:\t Price:\t\t ISBN:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t %s\t\t %d\t\t %d\n", btech[i].bookname, btech[i].author, btech[i].price, btech[i].isbn);
	}
}
