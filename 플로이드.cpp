#include <cstdio>
#define MAX 102
using namespace std;

int map[MAX][MAX];
int main(){
	freopen("input.txt", "r", stdin);
	int vertex; scanf("%d", &vertex);

	int edge;	scanf("%d", &edge);
	for(int i=1 ; i<= vertex ; i++){
		for(int j=1; j <= vertex ; j++){
			map[i][j]=111111111;
		}
	}

	for (int i=0 ; i< edge ;i++ )
	{
		int start;	int end;	int cost;
		scanf("%d %d %d", &start, &end , &cost);
		if(map[start][end]> cost)
			map[start][end] = cost;
	}
	
	for(int k=1; k<= vertex; k++){
		for(int i=1; i<= vertex; i++){
			for(int j=1 ; j<= vertex ; j++){
				if((i!=j) && map[i][k] + map[k][j] < map[i][j]){
					map[i][j] = map[i][k] + map[k][j] ;
				}
			}
		}
	}
	for(int i=1 ; i<= vertex ; i++){
		for(int j=1; j <= vertex ; j++){
			if(map[i][j] == 111111111) printf("0 ");
			else printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	return 0;
}