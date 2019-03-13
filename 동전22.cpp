#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#define MAX 10010

using namespace std;
int dp[1000001];
vector<short> myvec;

int main()
{
	fill_n(dp, 1000001, MAX);
	freopen("input.txt", "r", stdin);
	int num, target, max_input=0;;
	scanf("%d %d", &num, &target);
	for(int i=0; i< num; i++){
		int temp; scanf("%d", &temp);
		myvec.push_back(temp);
		if( max_input < temp )	max_input= temp;
		dp[temp] = 1;
	}
	for( int i=1; i + max_input < 1000001; i++){
		for( auto itr= myvec.begin(); itr!= myvec.end(); itr++ ){
			dp[i + *itr] = min(dp[i] + 1, dp[i+ *itr]);
		}
	}
	if( dp[target]== MAX )	printf("-1");
	else printf("%d", dp[target]);
	return 0;
}
