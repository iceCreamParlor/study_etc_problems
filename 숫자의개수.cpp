#include <stdio.h>

using namespace std;
int num[20];
int main()
{
	freopen("input.txt", "r", stdin);
	long long a, b, c;
	scanf("%lld %lld %lld", &a,&b,&c);
	long long result = a*b*c;
	
	while(result > 0){
		long long temp= result%10;
		//printf("%lld ", temp);
		num[result%10]++;
		result/= 10;
		//printf("%lld\n", result);
	}
	for(int i=0; i< 10; i++){
		printf("%d\n", num[i]);
	}
	return 0;
}
