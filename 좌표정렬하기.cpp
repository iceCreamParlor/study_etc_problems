#include <cstdio>
#include <utility>
#include <queue>
using namespace std;

struct cmp{
    bool operator()(pair<int, int> a, pair<int, int> b){
        if(a.first == b.first)
            return a.second > b.second;
        else
            return a.first > b.first;
    }
};
int main(){
    freopen("input.txt", "r", stdin);
    int num;    scanf("%d", &num);
    priority_queue<pair<int, int>, vector<pair<int, int> >, cmp > pq;

    for(int i=0; i<num; i++){
        int x, y;   scanf("%d %d", &x, &y);
        pq.push(make_pair(x, y));
    }
    while(!pq.empty()){
        int x = pq.top().first;
        int y = pq.top().second;
        pq.pop();
        printf("%d %d\n", x,  y);
    }
    return 0;
}