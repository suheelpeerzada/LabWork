#include<stdio.h>
main()
{
	struct bookdetails
	{
		char name[10], author[15];
		int price, isbn;
	};
	struct bookdetails bk1;
	printf("Enter the books name, author, price and ISBN respectively.\n");
	scanf("%s%s%d%d", &bk1.name, &bk1.author, &bk1.price, &bk1.isbn);
	printf("\nBook name:%s\n Author:%s\n Price:%d\n ISBN:%d",bk1.name, bk1.author, bk1.price, bk1.isbn);
}
