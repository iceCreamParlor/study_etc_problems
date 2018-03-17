#include <stdio.h>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	while(num--){
		long long a;int result= -99; scanf("%lld", &a);
		for(long long i=a; i>0; i--){
			bool check = true;
			long long par = i;
			while(par>0){
				long long resid = par%10;
				long long div = par/10;
				long long comp = div%10;
				if( resid < comp ){
					check = false;
				}
				par/=10;
			}
			if(check){
					long long result = i;
					printf("%lld\n", result);
					break;
				}
		}
	}
	return 0;
}
