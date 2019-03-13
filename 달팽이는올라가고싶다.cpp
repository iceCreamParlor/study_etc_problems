#include <stdio.h>

using namespace std;
long long A, B, V;
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%lld %lld %lld", &A, &B, &V);
	long long ans;
	long long temp = V - A;
	if( temp % (A-B) ==0 ){
		ans = temp/ (A-B) + 1;
	}
	else{
		ans = temp/(A-B) + 2;
	}
	printf("%lld", ans);
	return 0;
}
