//structures: collection of elements of different datatypes.
// user defined datatypes
#include<stdio.h>

struct student{
	int rno;
	float marks;
	char name[10];
};
void main(){
	struct student std1;
	std1.rno = 5;
	std1.marks = 50.0;
	printf("Enter name:\t");
	scanf("%s", std1.name);
	printf("Name: %s\nRoll no: %d\nMarks: %f\n", std1.name, std1.rno, std1.marks);
}
