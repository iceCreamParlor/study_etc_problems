#include <stdio.h>
#include <algorithm>

using namespace std;
int solve (int A, int C){
	int result;
	if( A%C== 0 ){
		result = A%C;
	}
	else{
		result = A/C +1;
	}
	return result;
}
int main()
{
	freopen("input.txt", "r", stdin);
	int L, A, B, C, D;
	scanf("%d %d %d %d %d", &L, &A, &B, &C, &D );
	int result = solve( A, C );
	result = max( result, solve(B, D) );
	result = L- result;
	if( result < 0 )
		result= 0;
	printf("%d", result);
	return 0;
}
