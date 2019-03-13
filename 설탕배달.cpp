#include <stdio.h>
#include <algorithm>
int result, mini=5000;
int main()
{
	freopen("input.txt", "r", stdin);
	int inp; scanf("%d", &inp);
	int div= inp/5;
	for(int i=0; i<= div; i++){
		int temp= inp- i*5; 
		if( temp%3 != 0 ) continue;
		else{
			result= i+ temp/3;
			mini= std::min(result, mini);
		}
	}
	if(mini==5000) printf("-1");
	else printf("%d", mini);
	return 0;
}
