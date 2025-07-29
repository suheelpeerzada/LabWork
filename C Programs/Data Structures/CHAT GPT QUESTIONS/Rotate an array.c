//rotating an array
#include<stdio.h>

int main(){
	int a[] = {2,3,4,5,6,7};
	int k = 3;
	int size = sizeof(a)/sizeof(a[0]);
	int buf[k];
	int dest[size], i, j=0;
	for(i=0;i<size;i++){
		if(i<k)
			buf[i] = a[i];
		else{
			dest[j] = a[i];
			j++;
		}
	}
	i=0;
	while(j<size){
		dest[j] = buf[i];
		i++;j++;
	}
	for(i=0;i<size;i++){
		printf("%d ", dest[i]);
	}
	return 0;
}

