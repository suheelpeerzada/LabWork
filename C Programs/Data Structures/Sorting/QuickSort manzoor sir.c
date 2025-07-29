#include<stdio.h>

void QS(int[], int, int);

void main(){
	int i, a[7] = {12,3,1,56,34,2,7}, n=7;
//	printf("Enter total number of elements\n");
//	scanf("%d", &n);
//	printf("Enter the elements now\n");
//	for(i=0;i<n;i++)
//	scanf("%d", &a[i]);
	printf("Provided Array is:\t");
	for(i=0;i<n;i++)
	printf("%d  ", a[i]);
	QS(a, 0, n-1);
	printf("Array after quick sort:\n");
	for(i=0;i<n;i++)
	printf("%d  ", a[i]);
}

void QS(int a[], int l, int h){
	int p, i, j, t;
	if(l<h){
	p=a[l];
	i=l+1;
	j=h;
	while(1){
		while(p>a[i] && i<=h)
		i++;
		while(p<a[j] && j>=l)
		j--;
		if(i<j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		else break;
	}
	a[l]=a[j];
	a[j]=p;
	QS(a, l, j-1);
	QS(a, j+1, h);
}}
