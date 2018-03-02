#include <stdio.h>
#include <stdlib.h>
#define MAX 1001

struct p
{
	int r, c;
};
using namespace std;
bool check[MAX][MAX];
char map[MAX][MAX];
p parent[MAX][MAX];
int result;
int row, col; 

p Find(p pinput){
	if(parent[pinput.r][pinput.c].r== pinput.r && parent[pinput.r][pinput.c].c == pinput.c){
		return pinput;
	}
	return parent[pinput.r][pinput.c] = Find( parent[pinput.r][pinput.c] );
}
void Union( p pinput1, p pinput2 ){
	parent[pinput2.r][pinput2.c] = Find(pinput1);
}
void dfs(int row, int col){
	if( parent[row][col].r != row || parent[row][col].c != col ){
		dfs( parent[row][col].r, parent[row][col].c );
	}
	else check[ row ][ col ] = true;
}

int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d %d", &row, &col);
	char trash; scanf("%d", &trash);
	for(int i=0; i< row; i++){
		for(int j=0; j< col; j++){
			scanf("%c", &map[i][j]);
			parent[i][j].r = i;
			parent[i][j].c = j;
		}
		scanf("%c", &trash);
	}
  
	for(int i=0; i< row; i++){
		for(int j=0; j< col; j++){
			if( map[i][j] == 'S' ){
				Union( parent[i+1][j], parent[i][j] );
			}
			else if( map[i][j] == 'N' ){
				Union( parent[i-1][j], parent[i][j] );
			}
			else if( map[i][j] == 'W' ){
				Union( parent[i][j-1], parent[i][j] );
			}
			else if( map[i][j] == 'E' ){
				Union( parent[i][j+1], parent[i][j] );
			}
		}
	}
	for(int i=0; i< row; i++){
		for(int j=0; j< col; j++){
			dfs(i, j);
		}
	}
	for(int i=0; i< row; i++){
		for(int j=0; j< col; j++){
			result+= check[i][j];
		}
	}
	printf("%d", result);
	return 0;
}