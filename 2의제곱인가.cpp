#include <stdio.h>
#define MAX 1024*1024*1024+1 
bool check[MAX];
int main()
{
	freopen("input.txt", "r", stdin);
	
	for( unsigned long long i=1 ; i<MAX ; i*=2 )
		check[i] = true;
	
	unsigned long long num; scanf("%llu", &num);
	printf("%d", check[num]);
	return 0;
}