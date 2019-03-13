#include <stdio.h>
int factorial(int n){
	if( n==1 )	return 1;
	return n* factorial(n-1);
}
int main()
{
	freopen("input.txt", "r", stdin);
	int a, b; scanf("%d %d", &a, &b);
	int temp = factorial(a)/ factorial(a-b) / factorial(b);
	printf("%d", temp);
	return 0;
}
