#include <stdio.h>
#include <algorithm>
#define MAX 51
using namespace std;

int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	char map[MAX][MAX];
	int mini = 9999999;
	int row, col;	scanf("%d %d", &row, &col);
	for(int i=0; i<row; i++){
		char trash;
		scanf("%c", &trash);
		for(int j=0; j<col ; j++){
			char c;	scanf("%c", &map[i][j]);
		}
	}
	for(int i=0; i+8 <= row; i++){
		for(int j=0; j+8 <= col; j++){
			int w_temp= 0;
			int b_temp= 0;
			for(int r=i; r< i+8 ; r++){	
				for(int c=j; c< j+8; c++){
					if((r+c)%2==1 && map[r][c] == 'W'){ //È¦¼ö
						w_temp+=1;
					}
					if((r+c)%2==1 && map[r][c] == 'B'){ //È¦¼ö
						b_temp+=1;
					}
					if(1-(r+c)%2==1 && map[r][c] == 'W'){ //Â¦¼ö
						b_temp+=1;
					}
					if(1-(r+c)%2==1 && map[r][c] == 'B'){ //Â¦¼ö
						w_temp+=1;
					}
				}
			}
			mini = min(min(w_temp, mini), b_temp);
		}
	}
	printf("%d\n", mini);
	return 0;
}
