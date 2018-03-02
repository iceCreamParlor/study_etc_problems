//¹ÌÇØ°á
#include <stdio.h>
#include <stdlib.h>
#define MAX 1001

using namespace std;
char map[MAX][MAX];
bool check[MAX][MAX];
int result;
int row, col; 

void dfs(int r1, int c1){
	if( check[r1][c1] == true ){
		return;
	}
	check[r1][c1] = true;
	if( map[r1][c1] == 'S' ){
		//printf("S\n");
		dfs( r1 + 1, c1 );
	}
	else if( map[r1][c1] == 'N' ){
		//printf("N\n");
		dfs( r1 - 1, c1 );
	}
	else if( map[r1][c1] == 'W' ){
		//printf("W\n");
		dfs( r1, c1 - 1 );
	}
	else if( map[r1][c1] == 'E' ){
		//printf("E\n");
		dfs( r1, c1+1 );
	}
}

int main()
{
	freopen("input.txt", "r", stdin);
	
	scanf("%d %d", &row, &col);
	char trash; scanf("%d", &trash);
	for(int i=0; i< row; i++){
		for(int j=0; j< col; j++){
			scanf("%c", &map[i][j]);
		}
		scanf("%c", &trash);
	}
	for( int i=0; i< row; i++ ){
		for( int j=0; j< col; j++ ){
			if( !check[i][j] ){
				result++;
				dfs(i, j);
			}
		}
	}
	printf("%d", result);
	return 0;
}
