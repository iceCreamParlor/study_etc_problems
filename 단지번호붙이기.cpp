#include <stdio.h>
#include <vector>
#include <algorithm>
#define MAX 30
using namespace std;

vector<int> v;
short map[MAX][MAX], check[MAX][MAX];
int num, result, house;
int r[4] = {0,0,1,-1};
int c[4] = {1,-1,0,0};

void dfs(int i, int j){
	check[i][j] = 1;
	
	for(int k=0; k<4; k++){
		int nextR= i + r[k];
		int nextC= j + c[k];
		if( nextR >=0 && nextR < num && nextC >=0 && nextC < num ){
			if( map[nextR][nextC] && !check[nextR][nextC] ){
				house++;
				dfs(nextR, nextC);
			}
		}
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d", &num);
	for(int i=0; i< num; i++){
		for(int j=0; j< num; j++){
			scanf("%1d", &map[i][j] );
		}
	}
	for(int i=0; i< num; i++){
		for(int j=0; j< num; j++){
			if( map[i][j]==1 && !check[i][j] ){
				house = 1 ;
				dfs( i, j );
				result++;
				v.push_back(house);
			}
		}
	}
	printf("%d\n", result);
	sort(v.begin(), v.end());
	for(vector<int>::iterator itr= v.begin(); itr!=v.end(); itr++)
		printf("%d\n", *itr);
	return 0;
}
