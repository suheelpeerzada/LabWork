#include<stdio.h>
main(){
	int a[5], i, x, y;
	printf("Enter 5 elements:\n");
	for(i=0;i<5;i++)
	scanf("%d", &a[i]);
	x=a[0];
	y=a[0];
	for(i=0;i<5;i++){
		if(x<a[i])
		x=a[i];
		if(y>a[i])
		y=a[i];
	}
	printf("Largest number is: %d\n", x);
	printf("Smallest number is: %d", y);
}
