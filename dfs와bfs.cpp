#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
#define MAX 1000

using namespace std;

int graph[MAX][MAX];
bool check[MAX];
int vertex, edge, from;
void dfs(int from, vector<int> answer);
void bfs(int from, vector<int> answer);

int main(){
    freopen("input.txt", "r", stdin);
    vector<int> answer;

    scanf("%d", &vertex);
    scanf("%d", &edge);
    scanf("%d", &from);

    for(int i=0 ; i< edge ; i++){
        int start, end; scanf("%d %d", &start, & end);
        graph[start][end] = 1;
        graph[end][start] = 1;
    }
    answer.push_back(from);
    dfs(from, answer);
    for(int i=1 ; i<= vertex ; i++){
        check[i] = false;
    }
    answer.clear();
    bfs(from, answer);
    return 0;
}
void bfs(int from, vector<int> answer){
    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(from);
    
    while(!pq.empty()){
        int temp = pq.top();
        if(!check[temp])
            answer.push_back(temp);
    
        pq.pop();
        check[temp] = true;
        for(int i=1 ; i<= vertex ; i++){
            if(!check[i] && graph[from][i]){
                pq.push(i);
            }
        }
    }
    for(auto itr = answer.begin() ; itr!= answer.end() ; itr++){
            printf("%d ", *itr);
    }
    printf("\n");
    
}
void dfs(int from, vector<int> answer){
    check[from] = true;
    bool promising = true;

    for(int i=1 ; i<= vertex ; i++){
        if(!check[i] && graph[from][i]){
            answer.push_back(i);
            promising = false;
            dfs(i, answer);
        }
    }
    if(promising){
        for(auto itr = answer.begin() ; itr!= answer.end() ; itr++){
            printf("%d ", *itr);
        }
        printf("\n");
    }
}