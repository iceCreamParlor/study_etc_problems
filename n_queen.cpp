#define MAX 100001
#include <cstdio>
#include <algorithm>

using namespace std;

int num;
int col[MAX], check[MAX];
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
		if(promising(i)){
			if(i == num){
				for(int j=1; j<=num; j++){
					printf("%d\n", col[j]);
				}
				exit(0) ;
			}else{
				for(int j=1; j<=num; j++){
					cal++;
					if(check[i]) continue;
					col[i+1] = j;
					check[i] = 1;
					dfs(i+1);
					check[i] = 0;
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

