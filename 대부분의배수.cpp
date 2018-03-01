#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> myvec;
int main()
{
	freopen("input.txt", "r", stdin);
	int a, b, c, d, e; scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	myvec.push_back(a);
	myvec.push_back(b);
	myvec.push_back(c);
	myvec.push_back(d);
	myvec.push_back(e);
	sort( myvec.begin(), myvec.end() );
	int temp = myvec[0];
	while( true ){
		int cnt= 0;
		for( int k: myvec ){
			if( temp % k ==0 )
				cnt++;
		}
		if( cnt >= 3 )	break;
		temp++;
	}
	printf("%d", temp);
	return 0;
}
