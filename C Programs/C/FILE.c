#include<stdio.h>
#include<stdlib.h>
main()
{	
    int n;
	FILE * fptr;
	fptr=fopen("C:\\program.txt", "w");
	if(fptr==NULL)
	{
	printf("Error, file doesnt exist");
    }
    else
    {
    printf("Enter data to be added to file:");
    scanf("%d", &n);
	fopen("program", "w");
	fprintf(fptr, "this is a c program");
	fclose(fptr);
	printf("File was edited");
}
	
}
