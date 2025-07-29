#include<stdio.h>
#include<stdlib.h>
main()
{	
    int s, n;
	FILE * fptr;
	fptr=fopen("E:\\program.txt", "r+");
    printf("Enter data to be added to file:");
    scanf("%d", &s);
	fopen("E:\\program.txt", "w");
	fprintf(fptr, "%d", s);
	printf("Data has been added to file.\n");
	fclose(fptr);
	fptr=fopen("E:\\program.txt", "r+");
	fscanf(fptr, "%d", &n);
	printf("Data stored is: %d", n);
	fclose(fptr);
}
