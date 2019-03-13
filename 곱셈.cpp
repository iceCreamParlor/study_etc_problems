#include <stdio.h>

long long solve(long long a, long long b, long long c){
	if(b== 0)	return 1LL;
	if(b== 1)	return a%c;
	if(b%2== 1)	return (a* solve(a, b-1, c))%c;
	if(b%2== 0){
		long long temp = solve(a, b/2, c);
		return temp*temp%c;
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	long long a, b, c;	scanf("%lld %lld %lld", &a, &b, &c);
	long long ans = solve(a, b, c);
	printf("%lld", ans%c);
	return 0;
}