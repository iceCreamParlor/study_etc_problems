#include <stdio.h>
#define MAX 100010


int main()
{
	freopen("input.txt", "r", stdin);
	int dp[MAX], arr[MAX];
	int num;	scanf("%d", &num);
	int max;
	for(int i=1; i<=num ; i++){
		scanf("%d", &arr[i]);
	}
	dp[1] = arr[1];
	for(int i=2; i<= num ; i++){
		if(dp[i-1] + arr[i] > arr[i]){
			dp[i] = dp[i-1] + arr[i]; 
		}else{
			dp[i] = arr[i];
		}
	}
	max = dp[1];
	for(int i=2; i<=num; i++){
		//printf("%d\n", dp[i]);
		max = (max < dp[i])? dp[i] : max;
	}
	printf("%d", max);
	return 0;
}
