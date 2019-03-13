#include <stdio.h>
int dp[50];
int main()
{
	int num; scanf("%d", &num);
	dp[0] = 0; dp[1]= 1; 
	for( int i=2; i <= 50 ; i++ ){
		dp[i] = dp[i-1] + dp[i-2];
	}
	printf("%d", dp[num]);
	return 0;
}
