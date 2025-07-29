/*Defining and Calling functions*/
#include <stdio.h>
void y();
void y()
{
	printf("Y");
}
 main()
{
	void a(), b(), c(), d();
	y();
	a();
	b();
	c();
	d();
}
void a()
{
	printf("A");
	y();	
}
void b()
{
	printf("B");
	a();
}
void c()
{
	b();
	a();
	printf("C");
}
void d()
{
	printf("D");
	c();
	b();
	a();
}
