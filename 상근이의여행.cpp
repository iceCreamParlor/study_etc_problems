#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int> > graph;
vector<int> nation;
queue<int> Queue;
vector<int> sum;
int cnt = 0;
int bfs(int n, int start){
    int pop, i,a;
    nation[start] = 1;
    Queue.push(start);

    while( ! Queue.empty() ){
        pop = Queue.front();
        Queue.pop();

        for(i = 1; i<= n; i++){
            if(graph[pop][i] == 1 && nation[i] == 0){
                cnt++;
                Queue.push(i);
                nation[i] = 1;
            }
        }

    }
    sum.push_back(cnt);

}

int main()
{
    // freopen("input.txt", "r", stdin);
    graph.resize(1001);
    nation.resize(1001);

    int T,i,N,M,a,b,j,k,x,y,start,l;
    for(i = 0; i<graph.size();i++){
        graph[i].resize(graph.size());
    }

    scanf("%d",&N);
    for(i = 1; i<=N; i++){
        scanf("%d %d",&a,&b);

        for(j= 1; j <=b;j++){
            scanf("%d %d",&x,&y);
            graph[x][y] = 1;
            graph[y][x] = 1;
        }

        bfs(a,1);
        cnt = 0;
        for(k = 0; k<graph.size();k++){
            for(l = 0; l<graph.size();l++){
                graph[k][l] = 0;
            }
        }
        for(k = 0; k<nation.size();k++){
            nation[k] = 0;
        }
    }
    for(k = 0; k<sum.size();k++){
            printf("%d\n",sum[k]);
  

      }

}
