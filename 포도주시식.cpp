#include <stdio.h>
#include <vector>
#include <algorithm>
std::vector<int> myvec;
using namespace std;
int dp[10001];
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=0; i< num; i++){
		int temp; scanf("%d", &temp);
		myvec.push_back(temp);
	}
	dp[0] = myvec[0];	dp[1] = dp[0] + myvec[1];	
	for(int i=2; i< num; i++){
		dp[i] = max(max( dp[i-1], dp[i-2] + myvec[i] ), myvec[i] + myvec[i-1] + dp[i-3]);
	}
	printf("%d",dp[num-1]);
	return 0;
}
