#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int a[510][510];
int total, num;
vector<int> ans;
void dfs(int depth, int position){
	if(depth == num){
		ans.push_back(total);
		return;	
	}
	total += a[depth+1][position];
	dfs( depth+1, position );
	total -= a[depth+1][position];
	total += a[depth+1][position+1];
	dfs( depth+1, position+1 );
	total -= a[depth+1][position+1];
}
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d", &num);
	for(int i=1; i<= num; i++){
		for(int j=1; j<= i; j++){
			scanf("%d", &a[i][j]);
		}
	}
	total += a[1][1];
	dfs(1, 1);
	sort(ans.begin(), ans.end());
	printf("%d", *(ans.end()-1));
	
	return 0;
}
