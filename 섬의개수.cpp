#include <cstdio>
#define MAX 51

using namespace std;
int check[MAX][MAX];
int map[MAX][MAX];
int row, col, result;
void dfs(int row, int col);
int main(){
	freopen("input.txt", "r", stdin);
	while(true){
		for(int i=0; i<MAX; i++)
			for(int j=0; j<MAX; j++){
				check[i][j] = 0;
				map[i][j] = 0;
			}
		scanf("%d %d", &col, &row);
		if( row==0 && col==0 )
			break;
		result= 0;
		for(int i=0; i< row; i++){
			for(int j=0; j<col; j++){
				scanf("%d", &map[i][j]);
			}
		}
		for(int i=0; i<row; i++)
			for(int j=0; j<col; j++){
				if(map[i][j]==1 && check[i][j] == 0){
					dfs(i, j);
					result++;
				}
			}
		printf("%d\n", result);
	}
	return 0;
}
	
void dfs(int r, int c){
	check[r][c] = 1;
	int dx[8] = {-1,-1,0,1,1,1,0,-1};
	int dy[8] = {0,1,1,1,0,-1,-1,-1};
	int i, nx, ny;
	for(i=0; i<8; i++){
		nx = c+ dx[i];
		ny = r+ dy[i];
		if(nx>=col || nx<0 || ny >= row || ny<0){
			continue;
		}
		if(check[ny][nx]==0 && map[ny][nx]==1){
			dfs(ny, nx);
		}
	}

}
