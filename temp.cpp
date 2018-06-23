#include <cstdio>
#include <algorithm>
#include <queue>
#include <iostream>
#include <functional>
#include <iostream>

using namespace std;

int Answer;
int main(int argc, char** argv)
{
	int T, test_case;
    setbuf(stdout, NULL);

	freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
		Answer = 0;
		priority_queue<int, vector<int>, greater<int> > pq, bus;
        int num; int gap;   scanf("%d %d", &num, &gap);
        for(int i=0 ; i< num ; i++){
            int score;  scanf("%d", &score);
            pq.push(score);
        }
        while(!pq.empty()){
            int now = pq.top();
            pq.pop();
            if(bus.empty()){ //empty bus queue
                bus.push(now);
            }else{
                int bus_smallest = bus.top();
                if(bus_smallest + gap < now){ //update bus
                    bus.pop();
                    bus.push(now);
                }else{
                    bus.push(now);
                }
            }
        }
        Answer = bus.size();
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}