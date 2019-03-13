#include <stdio.h>
#include <cstdlib>
#include <vector>
#include <queue>
#include <utility>
#define MAX 99999

using namespace std;

typedef pair<int, int> P;
vector<vector<P>>	graph;
vector<int> ans;

int result;
int n;
struct cmp
{
	bool operator()(P node1, P node2){
		return node1.second > node2.second;
	}
};

int dijkstra(int start, int dest){
	vector<int> dist(n+1, MAX);
	dist[start] = 0;
	priority_queue<P, vector<P>, cmp> pq;
	pq.push(make_pair(start, 0));
	for(int i=1; i<= n ; i++){
		if(i!=start)	pq.push(make_pair(i, MAX));
	}
	while(!pq.empty()){
		int u = pq.top().first;
		int d = pq.top().second;
		pq.pop();
		if(dist[u] > d)	continue;
		for(int i=0; i<graph[u].size(); i++){
			int v = graph[u][i].first;
			int w = graph[u][i].second;
			if(dist[v] > dist[u] + w){
				//printf("%d %d\n", u, d);
				dist[v] = dist[u] + w;
				pq.push(make_pair(v, dist[v]));
			}
		}
	}
	//printf("%d\n", dist[dest]);
	return dist[dest];
}
int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	scanf("%d", &n);
	int edge;	scanf("%d", &edge);
	int dest;	scanf("%d", &dest);
	graph.resize(n+1);
	ans.resize(n+1);
	for(int i=0; i<edge; i++){
		int s, d, c;	scanf("%d %d %d", &s, &d, &c);
		graph[s].push_back(make_pair(d, c));
	}
	for(int i=1; i<=n; i++){
		int go = dijkstra(i, dest);
		int come = dijkstra(dest, i);
		ans[i] = go+ come;
	}
	int result= -1;
	for(auto itr= ans.begin(); itr!= ans.end(); itr++){
		result = result < *itr ? *itr: result;
	}
	printf("%d", result);
	
	return 0;
}
