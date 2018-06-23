/*
    N 명의 바둑 선수들이 몇 대의 버스에 나누어 타려고 한다.
    선수들은 1부터 N까지 번호가 붙어 있다. 각 선수는 실력 값을 가지고 있다.
    선수 i번의 실력 값을 Ai라고 하자.

    선수들 간의 경쟁심 때문에 두 선수의 실력 차이가 K이하인 경우는 같은 버스에 타지 않는다고 한다.
    즉, 두 선수 i번과 j번의 (i≠j) 실력이 |Ai−Aj|≤K를 만족하는 경우 같은 버스에 타지 않는 것이다. 
    한 대의 버스에 탈 수 있는 인원은 무제한이라고 한다. 

    철수는 선수들의 실력을 입력으로 받아서 필요한 버스 수의 최소값을 계산하려고 한다.
    여러 선수들이 서로 같은 버스를 타지 않는 관계가 매우 복잡해 보이지만, 철수는 아주 간단한 계산 방법이 있다는 것을 알게 되었다.
    철수를 도와서 버스 수의 최소값을 계산하는 프로그램을 작성하라.
*/

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