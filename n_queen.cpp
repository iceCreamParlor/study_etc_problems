// Not Solved
#define MAX 100001
#include <cstdio>
#include <algorithm>

using namespace std;

int num;
int col[MAX];
int used[MAX];
int cal= 0;
int promising(int i){
	int k, result;
	k=1; result=1;
	while(k<i && result){
 		if(col[i] == col[k] || (col[i] - col[k] == i-k)||(col[i] - col[k] == k-i)){
			result = 0;
		}
		k++;
	}
	return result;
}
void dfs(int i){
	cal++;
	for(int j=1; j<=num; j++){
		if(promising(i) && !used[j]){
			if(i == num){
				for(int j=1; j<=num; j++){
					printf("%d\n", col[j]);
				}
				printf("\n%d\n", cal);
				exit(0) ;
			}else{
					col[i+1] = j;
					used[j] = 1;
					dfs(i+1);
					used[j] = 0;
				}
		}
	}
}
int main(){
	scanf("%d", &num);
	for(int i=1; i<=num; i++){
		col[1] = i;
		dfs(1);
	}
	return 0;
}

