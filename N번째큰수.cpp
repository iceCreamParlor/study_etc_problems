#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int main(){

	int num;	scanf("%d", &num);
	while(num--){
    priority_queue<int> pq;

		for(int i=0; i<10 ;i++){
			int temp;	scanf("%d", &temp);
			pq.push(temp);
		}
		pq.pop();pq.pop();
		printf("%d\n", pq.top());
	}
	return 0;
}
