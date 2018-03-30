#include <stdio.h>
#include <algorithm>
#define MAX 51

using namespace std;
int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	int maxim= 1;
	short map[MAX][MAX];
	int row, col;	scanf("%d %d", &row, &col);
	for(int i=0; i<row; i++){
		for(int j=0; j< col; j++){
			scanf("%1d", &map[i][j]);
		}
	}
	int max_size = min(row, col);
	for(int size=1 ; size<= max_size; size++){
		for(int r=0; r+size-1 < row ; r++){
			for(int c=0; c+size-1 < col ; c++){
				if( map[r][c] == map[r+size-1][c] && map[r][c] == map[r][c+size-1] && map[r][c] == map[r+size-1][c+size-1] ){
					maxim = max(maxim, size* size);
				}
			}
		}
	}
	printf("%d", maxim);
	return 0;
}
