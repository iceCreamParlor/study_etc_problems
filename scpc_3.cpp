#include <iostream>
#include <vector>
#include <queue>
#define MAX 200010
using namespace std;

int Answer;

vector<int> graph[MAX];

bool cycle(int start);
int main(int argc, char** argv)
{
	int T, test_case;

	// freopen("input.txt", "r", stdin);
    setbuf(stdout, NULL);
	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
        queue<int> q;
        Answer = 0;
        int vertex, edge ; scanf("%d %d", &vertex, &edge);
        for(int i=1 ; i <= vertex ; i++){
            graph[i].clear();
        }
        for(int i=0 ; i< edge ; i++){
            int v1, v2;
            scanf("%d %d", &v1, &v2);
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
        }
		for(int i= 1 ; i<= vertex ; i++){
            if(graph[i].size()==2){
                if(cycle(i)){
                    q.push(i);
                }
            }
        }
        while(!q.empty()){
            int now = q.front();
            q.pop();
            if(!cycle(now) || graph[now].size() != 2){
                // Answer++;
                continue;
            }
            // cout << now << "out" << endl;
            if(graph[now].empty()){
                continue;
            }
            int one = graph[now][0];
            for(int z=0; z< graph[one].size(); z++){
                if(graph[one][z] == now){
                    graph[one].erase(graph[one].begin() + z);
                }
            }
            int two = graph[now][1];

            for(int z=0; z< graph[two].size(); z++){
                if(graph[two][z] == now){
                    graph[two].erase(graph[two].begin() + z);
                }
            }
            if(graph[one].size()==2){
                if(cycle(one)){
                    q.push(one);
                }
            }
            if(graph[two].size()==2){
                if(cycle(two)){
                    q.push(two);
                }
            }
            graph[now].clear();
        }
        cout << "Case #" << test_case+1 << endl;
		for(int i=1; i<=vertex ; i++){
            if(!(graph[i].empty())){
                Answer++;
                // cout << i;
            }   
        }
        // cout<< endl;
		cout << Answer << endl;
	}
	return 0;
}
bool cycle(int start){
    
    bool check = false;
    int a =graph[start][0];
    int b =graph[start][1];
    if(graph[a].size()==1 || graph[b].size()==1){
        return false;
    }
    
    for(int i=0; i< graph[a].size() ; i++){     
        if(graph[a][i]==b){
            check= true;  
        }
    } 
    return check;
}