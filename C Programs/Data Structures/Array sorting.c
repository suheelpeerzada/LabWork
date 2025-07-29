#include<stdio.h>
main(){
	int a[5]={21,45,2,455,90}, x=0, i, j, k;
	printf("In descending order:\n");
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
		if(a[i]<a[j]){
		x=a[i];
		a[i]=a[j];
		a[j]=x;
	    }
		}
    }
   for(k=0;k<5;k++)
   printf("\n%d\t", a[k]);
   
   printf("\nIn ascending order:\n");
   for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
		if(a[i]>a[j]){
		x=a[i];
		a[i]=a[j];
		a[j]=x;
	    }
		}
    }
    for(k=0;k<5;k++)
   printf("\n%d\t", a[k]);
}
