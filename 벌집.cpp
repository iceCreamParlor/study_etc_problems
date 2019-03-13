#include <stdio.h>
using namespace std;
int main()
{
	long long num; scanf("%lld", &num);
	int cnt= 1, total= 1, oper= 1;;
	while(total< num){
		total += oper*6;
		oper++; cnt++;
	}
	printf("%d", cnt);
	return 0;
}
