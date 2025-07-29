#include<stdio.h>
#include<string.h>

void lcs(char a[], char b[], int la, int lb){
	int i, j, num[la][lb];
	char dir[la][lb], s[la], size=0;
	
	for(i=0;i<la;i++)
		num[i][0] = 0;
	for(j=0;j<lb;j++)
		num[0][j] = 0;
		
	for(i=1;i<la;i++)
		for(j=1;j<lb;j++){
			if(a[i-1] == b[i-1]){
				num[i][j] = num[i-1][j-1] + 1;
				dir[i][j] = 'd';
			}
			else if(num[i-1][j]>num[i][j-1]){
				num[i][j] = num[i-1][j];
				dir[i][j] = 'v';
			}
			else{
				num[i][j] = num[i][j-1];
				dir[i][j] = 'h';
			}
		}
	i = la-1; j = lb-1;
	while(i > 0 && j > 0){
		if(num[i][j] == 'd'){
			s[size] = a[i-1];
			size++; i--;j--;
		}
		else if(num[i][j] == 'v'){
			i--;
		}
		else j--;
	}
	printf("LCS is:\t");
	for(i=size-1;i>=0;i--)
	printf("%c ", s[i]);
}

int main(){
	char a[10] = "abcbdab";
	char b[10] = "acdb";
	
	int x = strlen(a), y = strlen(b);
	
	lcs(a, b, x, y);
	return 0;
}
