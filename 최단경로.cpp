#include <cstdio>
#include <utility>
#include <vector>
#include <queue>
#define MAX 10000

using namespace std;
typedef pair<int, int> P;

vector<vector<P>> graph;

struct cmp
{
	bool operator()(P node1, P node2){
		return node1.second > node2.second;
	}
};
void dijkstra(int start, int vertex){
	priority_queue<P, vector<P>, cmp> pq;
	vector<int> dist(vertex+1, MAX);
	dist[start] = 0;
	pq.push(make_pair(start, 0));
	for(int i=1; i<=vertex; i++){
		if(i!= start){
			pq.push(make_pair(i, MAX));
		}
	}

	while(!pq.empty()){	//거리가 짧은 것부터 정렬(start부터 시작)
		int u = pq.top().first;

		int d = pq.top().second;
		pq.pop();
		if(d > dist[u])	continue;
		for(int i=0; i< graph[u].size() ; i++){
			int v = graph[u][i].first;
			int w = graph[u][i].second;
			//printf("%d", dist[u]);
			//printf("%d -> %d %d\n", u, v, w);
			if(dist[v] > dist[u] + w){
				//printf("%d -> %d 변경", u, v);
				dist[v] = dist[u] + w;
				pq.push(make_pair(v, dist[v]));
			}
		}
	}
	for(int i=1; i<= vertex ; i++){
		printf(dist[i] == MAX? "INF\n":"%d\n",dist[i] );
	}
}
int main(){
	freopen("input.txt", "r", stdin);
	int vertex;	scanf("%d", &vertex);
	int edge;	scanf("%d", &edge);
	int start;	scanf("%d", &start);
	graph.resize(vertex+1);
	for(int i=1; i<= edge; i++){
		int s, d, c;	scanf("%d %d %d", &s, &d, &c);
		graph[s].push_back(make_pair(d, c));
	}
	dijkstra(start, vertex);

	return 0;
}