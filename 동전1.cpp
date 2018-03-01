#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
#define MAX 10010

using namespace std;

vector<int> myvec, ans;
int result, num, target, index;
bool visit[10001];
void dfs(int start){
	if( start == target )	{
		visit[ result ]=true;
		ans.push_back(result);
	}

	for( int i=0; i< num; i++ ){
		if( start + myvec[i] <= target ){
			index =pow(10, i)* myvec[i]; 
			result+= pow(10, i)* myvec[i];
			if(!visit[ result]){
				dfs( start + myvec[i] );
			}
			result-= pow(10, i)* myvec[i];
		}
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d", &num);
	scanf("%d", &target);
	
	for( int i=0; i< num; i++ ){
		int temp; scanf("%d", &temp);
		myvec.push_back(temp);
	}
	dfs(0);
	
	printf("%d\n", ans.size());
	return 0;
}
	