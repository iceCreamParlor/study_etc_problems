#define MAX 50010
#include <cstdio>
#include <algorithm>

int map[MAX][MAX], check[MAX];
int cost
void dfs(int start, int num, int cost);

int main(){
	freopen("input.txt", "r", stdin);

	int num;	scanf("%d", &num);
	for(int i=0; i< num ; i++){
		int start, end ,cost;
		scanf("%d %d %d", &start, &end, &cost);
		map[start][end] = cost;
		map[end][start] = cost;
	}
	for(int i=1 ; i<= num ; i++){
		for(int j=1; j<=num ; j++){
			check[j]= 0; // ÃÊ±âÈ­
		}
		dfs(i, num, 0);
	}
	return 0;
}
void dfs(int start, int num, int cost){
	for(int i=1; i<= num ; i++){
		if(map[start][i] && !check[i]){
			cost += map[start][i];
			check[i] = 1;
			dfs(i, num, cost);
		}
	}
}