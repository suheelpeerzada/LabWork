#include<stdio.h>
#include<string.h>
#define max 7


void lcs(char a[], char b[], int lena, int lenb){
	int i, j, vis[lena][lenb], count= 0;
	char dir[lena][lenb], sol[lena];

	for(i=0;i<max;i++)
		dir[0][i] = 0;
	for(j=0;j<max;j++)
		dir[j][0];
	for(i=1;i<lena;i++)
		for(j=1;j<lenb;j++){
			if(a[i-1] == b[i-1]){
				vis[i][j] = vis[i-1][j-1] + 1;
				dir[i][j] = 'd';
			}
			else if(vis[i-1][j] < vis[i][j-1]){
				vis[i][j] = vis[i-1][j];
				dir[i][j] = 'v'; 
			}
			else{
				vis[i][j] = vis[i][j-1];
				dir[i][j] = 'h';
			}
		}
	i = lena - 1;
	j = lenb - 1;
	
	while(i > 0 && j > 0){
		if(dir[i][j] == 'd'){
			sol[count] = a[i];
			i--; j--;
			count++;
		}
		else if(dir[i][j] == 'v'){
			i--;
		}
		else j--;
	}
	printf("%s", sol);
}

int main(){
	char a[max] = "aaaaa";
	char b[max] = "aa";
	int x = strlen(a);
	int y = strlen(b);
	
	lcs(a, b, x, y);
	
	return 0;
}
