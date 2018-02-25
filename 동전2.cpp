#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#define MAX 10010
using namespace std;

short  num, target;
short dp[1000001];
vector<short> myvec;

void bfs( short temp ){
	for( auto itr= myvec.begin(); itr!= myvec.end(); itr++ ){
		if( (temp + (*itr)) <= target ){
			//cout << temp + (*itr) << " ";
			dp[ temp+(*itr) ] = min( (short)(dp[temp] + 1), dp[ temp+(*itr) ]);
			bfs( temp+ (*itr) );
		}
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d %d", &num, &target);
	for( short i=0 ; i<= target ; i++){
		dp[i] = MAX;
	}
	for( short i=0; i<num; i++ ){
		short temp; scanf("%d", &temp);
		myvec.push_back( temp );
		dp[temp] = 1;
	}
	for( auto itr= myvec.begin(); itr!= myvec.end(); itr++ ){
		bfs(*itr);
	}
	if( dp[target]== MAX )	printf("-1");
	
	else printf("%d", dp[target]);
	return 0;
}
