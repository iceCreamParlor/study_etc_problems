#include <stdio.h>
#include <queue>

using namespace std;

struct cmp
{
	bool operator()(int a, int b){
		return a> b;
	}
};
int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	priority_queue<int, vector<int>, cmp> pq;
	priority_queue<int> ans;
	int num;	scanf("%d", &num);
	for(int i=0;i<num; i++){
		int temp;	scanf("%d", &temp);
		pq.push(temp);
	}
	while(!pq.empty()){
		int temp = pq.top() * num--;
		pq.pop();
		ans.push(temp);
	}
	printf("%d", ans.top());
	return 0;
}
