#include<stdio.h>
int bs(int, int,int , int, int *);
main(){
	int a[20000]={20}, s = 33, i;
	int low=a[0];
	int high=a[19999];
	int mid=(high+low)/2;
//	printf("Enter search element:\n");
//	for(i=0;i<7;i++){
//		printf("%d ", a[i]);
//	}
//	scanf("%d", &s);
	printf("Located at %d place\n", bs(high,low,mid,s, *a));
}
int bs(int high, int low, int mid, int s, int *a){
	int i;
	if(low>high)
	return -1;
	if(s==mid)
	return mid;
	if(s<mid){
		for(i=0;i<mid;i++){
			if(a[i]==s)
			return a[i];
		}
	}
	else
	bs(high-1, low=mid+1, mid, s, a);
	
}
