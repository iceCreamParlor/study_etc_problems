#include <stdio.h>
#include <vector>

using namespace std;
int dp[5010][3], arr[5010];
int result= 1;
int main()
{
	int c;	int num=0; bool check= true;
	freopen("input.txt", "r", stdin);
	while( scanf("%1d", &c) != EOF ){
		arr[num] = c;
		num++;
	}
	for(int i=0; i< num; i++){
		if(i==0){
			dp[i][1] = 1;
			dp[i][2] = 0;
		}
		else{
			if( arr[i-1] == 1 && arr[i] != 0){
				dp[i][1] = (dp[i-1][2] + dp[i-1][1])% 1000000;
				dp[i][2] = dp[i-1][1]% 1000000;
			}
			else if( arr[i-1] ==2 && arr[i] <= 6 && arr[i] != 0){
				dp[i][1] = (dp[i-1][2] + dp[i-1][1])% 1000000;
				dp[i][2] = dp[i-1][1];
			}
			else if( arr[i] == 0 && i > 0 && arr[i-1] <= 2){
				dp[i][1] = 0;
				dp[i][2] = dp[i-1][1]% 1000000;
			}
			else if( arr[i] == 0 && i > 0 && arr[i-1] > 2){
				dp[i][1] = 0;
				dp[i][2] = 0;
				result= 0;
				check= false;
				break;
			}
			else{
				dp[i][1] = 1;
				dp[i][2] = 0;
			}
		}
	}

	for(int i=0; i+1< num; i++){
		if( dp[i+1][1] ==1 && dp[i+1][2]==0 ){
			int temp = dp[i][1]+dp[i][2];
			result *= temp;
		}
		if( i+1 == num-1 ){
			int temp = dp[i+1][1]+dp[i+1][2];
			result *= temp;
		}
	}
	if( c==0 && num==1 ){
		result= 0;
	}
	if(check== false)
		result= 0;
	printf("%d", result % 1000000);
	return 1;
}
