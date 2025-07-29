#include<stdio.h>
main(){
	int arr[7],p, x,y,z,c,i;
	arr[0]=x;
	arr[1]=3;
	arr[2]=y;
	arr[3]=2;
	arr[4]=z;
	arr[5]=1;
	arr[6]=c;
	for(i=0; i<7;i++){
		if(i==0 || i==2|| i==4|| i==6){
			printf("Enter value for A[%d].\n", i);
			scanf("%d", &arr[i]);
		}
		else{
			continue;
		}}
		
		printf("Value stored: %d^3+%d^2+%d^+%d=0", arr[0], arr[2], arr[4], arr[6]);
		p=count();
		printf("%d", p);
}
