#include <stdio.h>
#include <queue>

using namespace std;
priority_queue<int> q;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	while(num--){
		int temp; scanf("%d", &temp);
		if(temp ==0 ){
			printf("%d\n", q.empty() ? 0: q.top());
			if( !q.empty() ){
				q.pop();
			}
		}
		else
			q.push(temp);
	}
	return 0;
}
