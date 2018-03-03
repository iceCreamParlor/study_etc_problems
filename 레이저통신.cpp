//¹ÌÇØ°á
#include <stdio.h>
#include <queue>
#include <algorithm>
#define MAX 101

struct p
{
	int r, c;
};
int mover[4] = {0,0,1,-1};
int movec[4] = {1,-1,0,0};
using namespace std;
int prev, col, row, result;	int mini = 111111111;
char map[MAX][MAX];
bool check[MAX][MAX];
p start;

void bfs(p start, int dir){
	
	if( start.r >= row || start.c >= col || start.r <0 || start.c<0  )	return;
	if( map[start.r][start.c] =='C' ){
		mini = min(mini, result);
		//printf("%d %d\n", start.r, start.c);
		
		printf("result : %d  dir : ", result);
		printf("%d\n", dir);
		printf("Success!\n");
		
		return;
	}
	else if( map[start.r][start.c] == '*' )	return;
	else{
		//printf("%d %d\n", start.r, start.c);
		
		for( int i=0; i<4; i++ ){
			//printf("%d %d\n", start.r, start.c);
			p temp;
			temp.r = start.r + mover[i];
			temp.c = start.c + movec[i];
			check[start.r][start.c] = 1;

			if( !check[temp.r][temp.c] ){
				if(dir == i){
					bfs( temp, i );
				}
				else{
					result++;
					bfs( temp, i );
					result--;
				}
			}	
		}
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d %d", &col, &row);
	for(int i=0; i< row; i++){
		for(int j=0; j< col; j++){
			scanf("%c", &map[i][j]);
			if(map[i][j] == '\n' ){
				j--;
			}
		}
	}
	/*
	for(int i=0; i< row; i++){
		for(int j=0; j< col; j++){
			printf("%c", map[i][j]);
			
		}printf("\n");
	}
	*/

	for(int i=0; i< row; i++){
		for(int j=0; j< col; j++){
			if( map[i][j] == 'C' ){
				start.r= i; start.c= j;
			}
		}
	}
	//printf("%d %d\n", start.r, start.c);
	for(int i=0; i<4; i++){
		for(int i1=0; i1< MAX; i1++){
			for(int j1=0; j1< MAX; j1++){
				check[i1][j1] = 0;
			}
		}
		result = 0;
		check[start.r][start.c] = 1;
		p temp;
		temp.r = start.r + mover[i];
		temp.c = start.c + movec[i];
		bfs(temp, i);
	}
	
	printf("%d", mini);
	return 0;
}
