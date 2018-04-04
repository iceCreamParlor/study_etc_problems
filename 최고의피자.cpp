#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <queue>
#define MAX 101

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	priority_queue<int> pq;
	int num;	scanf("%d", &num);
	int dp, tp;	scanf("%d %d", &dp, &tp);
	int dc;	scanf("%d", &dc);
	for(int i=0; i<num; i++){
		int temp;
		scanf("%d", &temp);
		pq.push(temp);
	}
	int total_calory=dc, total_price=dp;
	int n=1;
	int max= -1;
	while(!pq.empty()){
		total_calory += pq.top();
		pq.pop();
		total_price += tp;
		int result = total_calory/total_price;
		if(max > result){
			break;
		}else{
			max = result;
		}
	}
	printf("%d", max);

	return 0;
}
