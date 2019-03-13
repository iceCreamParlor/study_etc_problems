#include <stdio.h>
#include <vector>
#include <utility>
#define MAX 1001

using namespace std;
typedef  pair<short,short> P;
vector<int> ans;

void travel(vector<P> *map, int start, int dest, int total_cost){

	if(start == dest){
		//printf("%d %d %d\n", start, dest, total_cost);
		ans.push_back(total_cost);
		//printf("%d\n", ans.size());
		return;
	}
	int size = map[start].size();
	for(int i=0; i<size; i++){
		travel(map, map[start][i].first, dest, total_cost+map[start][i].second);
	}
}
int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	int node;	scanf("%d", &node);
	int num;	scanf("%d", &num);
	vector<P> map[MAX];
	for(int i=0; i<num; i++){
		int s, d, c;	scanf("%d %d %d", &s, &d, &c);
		map[s].push_back(make_pair(d, c));	// 도착지 / 가격 저장
	}
	
	int start, dest;	scanf("%d %d", &start, &dest);
	travel( map, start, dest, 0);
	int mini = 9999999;
	
	for(auto itr= ans.begin() ; itr!= ans.end(); itr++){
		mini = (mini>(*itr))? (*itr) : mini;
	}
	printf("%d", mini);
	return 0;
}
