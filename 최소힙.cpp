#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;
priority_queue<int> q;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	while(num--){
		int temp; scanf("%d", &temp);
		if(temp ==0 ){
			printf("%d\n", q.empty() ? 0: q.top()*-1);
			if( !q.empty() ){
				q.pop();
			}
		}
		else
			q.push(temp*-1);
	}
	return 0;
}
