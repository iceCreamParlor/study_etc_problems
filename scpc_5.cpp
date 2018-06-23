#include <stdio.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>
#define MAX 110

int Answer;
int total_price;
int mini=111111111;
using namespace std;
vector<int> graph[MAX];
vector<int> price;
int final_vertex[MAX];
vector<pair<int, int> > myvertex;
double average;
void calculate(int vertex);
void brute_force(int vertex);
bool cmp(int a, int b){
    return abs(double(average)-a) < abs(double(average)-b);
}
bool cmp_vertex(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}
int main(void)
{
	int T, test_case;
	freopen("input.txt", "r", stdin);
	setbuf(stdout, NULL);

	scanf("%d", &T);
	for(test_case = 0; test_case < T; test_case++)
	{
        total_price = 0;
        average = 0;
        mini = 111111111;
        price.clear();
        myvertex.clear();
		int vertex, edge;   scanf("%d %d", &vertex, &edge);
        for(int i=0 ; i<vertex ; i++){
            graph[i].clear();   
            average += i;
            price.push_back(i);
        }
        average/=vertex;
        sort(price.begin(), price.end(), cmp);
        
        for(int i= 0 ;i< edge ; i++){
            int v, e;   scanf("%d %d", &v, &e);
            graph[v].push_back(e);
        }        
        if(vertex<=2){
            brute_force(vertex);
            printf("Case #%d\n", test_case+1);
            printf("%d\n", mini);
            int temp=0;
            for(int i=0 ; i< vertex ; i++){
                cout << final_vertex[i] << " ";
                final_vertex[i] = -1;
            }
            cout << endl;
        }
        else{
            
            for(int i=0 ; i< vertex ; i++){
                int size = graph[i].size();
                myvertex.push_back(make_pair(i, size));
            }
            sort(myvertex.begin(), myvertex.end(), cmp_vertex);
            for(int i=0 ; i< price.size() ; i++){
                int ind = price[i];
                final_vertex[ind] = ind;
            }
            calculate(vertex);
        
        
        
            printf("Case #%d\n", test_case+1);
            printf("%d\n", mini);
            
            for(int i=0 ; i< vertex ; i++){
                final_vertex[price[i]] = i;
            }
            for(int i=0 ; i< vertex ; i++){
                cout << final_vertex[i] << " ";
                final_vertex[i] = -1;
            }
            
            cout << endl;
        }
	}

	return 0;
}
void calculate(int vertex){
    for(int i=0 ; i< vertex ; i++){
        int size = graph[i].size();
        int point = myvertex[i].first;
        int current_price = price[i];
        for(int j=0 ; j< size ; j++){
            int point2 = graph[i][j];
            total_price+=abs(final_vertex[point]-final_vertex[point2]);
        }
    }
    if(mini > total_price){
        mini = total_price;
    }
}
void brute_force(int vertex){
    sort(price.begin(), price.end());
    do{
        total_price=0;
        
        for(int i=0 ; i< vertex ; i++){
            int size = graph[i].size();
            
            for(int j=0 ; j< size ; j++){
                total_price+=abs(price[i] - price[graph[i][j]]);
            }
        }
        if(mini > total_price){
            mini = total_price;
            for(int i=0 ; i< vertex ; i++){
                final_vertex[price[i]] = i;
            }
        }
    }while(next_permutation(price.begin(), price.end()));
}