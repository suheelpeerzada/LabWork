#include<stdio.h>
#include<stdlib.h>
main()
{	
    int n, num;
	FILE * fptr;
	fptr=fopen("C:\\program.txt", "r+");
	if(fptr==NULL)
	{
	printf("Error, file doesnt exist");
    }
    else
    {
	fopen("program", "r");
	fscanf(fptr, "%d", &num);
	printf("Data in File: %d", num);
	fclose(fptr);
}
}
