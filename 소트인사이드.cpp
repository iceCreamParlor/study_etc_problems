#include <stdio.h>
#include <queue>
using namespace std;
bool compare(int a, int b){
	return a>b;
}
priority_queue<int> q;

int main()
{
	freopen("input.txt", "r", stdin);
	int temp;
	while(scanf("%1d", &temp) != EOF){
		q.push(temp);
	}
	while(!q.empty()){
		printf("%d",q.top());
		q.pop();
	}
	return 0;
}
