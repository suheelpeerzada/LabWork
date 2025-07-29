//LCS
#include<stdio.h>
#include<string.h>

void lcs(char a[], char b[], int la, int lb){
	char dir[la][lb], ans[la];
	int num[la][lb], c=0, i,j;
	
	
	for(i=0;i<la;i++)
	num[i][0] = 0;
	for(j=0;j<lb;j++){
		num[0][j] = 0;
	}
//	for(i=0;i<la;i++){
//		for(j=0;j<lb;j++){
//			printf("%d ", num[i][j]);
//		}
//		printf("\n");
//	}
	for(i=1;i<la;i++)
	for(j=1;j<lb;j++){
		if(a[i-1] == b[i-1]){
			num[i][j] = num[i-1][j-1] + 1;
			dir[i][j] = 'd';
			printf("stored d at dir[%d][%d]\n", i,j);
		}
		else if(num[i-1][j]>num[i][j-1]){
			num[i][j] = num[i-1][j];
			dir[i][j] = 'v';
			printf("stored v at dir[%d][%d]\n", i,j);
		}
		else{
			num[i][j] = num[i][j-1];
			dir[i][j] = 'h';
			printf("stored h at dir[%d][%d]\n", i,j);
		}
	}
	i = la-1; j = lb-1;
	while(i > 0 && j > 0){
		if(dir[i][j] == 'd'){
			ans[c] = a[i-1];
			c++; i--;j--;
		}
		else if(dir[i][j] == 'v'){
			i--;
		}
		else j--;
	}
//	for(i=0;i<la;i++){
//		for(j=0;j<lb;j++){
//			printf("%d ", num[i][j]);
//		}
//		printf("\n");
//	}
	for(i=0;i<c;i++)
	printf("%c", ans[i]);
}

int main(){
	char a[10] = "abcbdab";
	char b[10] = "abcbdab";
	
	int x = strlen(a);
	int y = strlen(b);
	
	lcs(a, b, x, y);
	return 0;
}
