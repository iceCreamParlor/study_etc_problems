#include <stdio.h>
unsigned long long fibo[100];
int main()
{
	freopen("input.txt", "r", stdin);
	int n;	scanf("%d", &n);
	fibo[0] = 0ULL;	fibo[1] = 1ULL;
	for(unsigned long long i=2; i<= n; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	printf("%llu", fibo[n]);
	return 0;
}
