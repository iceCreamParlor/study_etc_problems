#include <stdio.h>
#include <algorithm>
using namespace std;

int result, mini = 1000000;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=1; i< num; i++){
		int sum= i;
		int cnt = i;
		while(cnt > 0){
			int temp = cnt % 10;
			sum+= temp;
			cnt=cnt/ 10;
		}
		if( sum==num ){
			mini = min(mini, i);
		}
	}
	if(mini==1000000)	mini= 0;
	printf("%d", mini);
	return 0;
}
