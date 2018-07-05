#include <cstdio>
#define MAX 100

using namespace std;
short ans[MAX][MAX];

int main(){
	freopen("input.txt", "r", stdin);
	int num;
	short map[MAX][MAX];
	scanf("%d", &num);
	for(int i=0 ; i< num ; i++){
		for(int j=0; j< num; j++){
			scanf("%d", &map[i][j]);
		}
	}
	for(int k=0 ; k< num ; k++){
		for(int i=0 ; i< num ; i++){
			for(int j=0 ; j< num ; j++){
				if(map[i][k]!=0 && map[k][j] != 0){
					map[i][j] = 1;
				}
			}
		}
	}
	for(int i=0 ; i< num ; i++){
		for(int j=0; j< num; j++){
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	return 0;
}