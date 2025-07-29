#include<stdio.h>
#include<conio.h>
main()
{
	int i[10];
	char x[10];
	long l[10];
	printf("The type 'int' requires %d bytes\n", sizeof(int));
	printf("The type 'char' requires %d bytes\n", sizeof(char));
	printf("The type 'long' requires %d bytes\n", sizeof(long));
	printf("%d memory locations reserved for 10 'int' elements\n", sizeof(i));
	printf("%d memory locations reserved for 10 'char' elements\n", sizeof(x));
	printf("%d memory locations reserved for 10 'long' elements\n", sizeof(l));
}
