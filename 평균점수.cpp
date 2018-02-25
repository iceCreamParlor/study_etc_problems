#include <stdio.h>
#include <vector>

using namespace std;
vector<int> myvec;
int sum;
int main()
{
	freopen("input.txt", "r", stdin);
	for( int i=0; i< 5; i++ ){
		int temp; scanf("%d", &temp);
		myvec.push_back(temp);
	}
	for( auto itr= myvec.begin(); itr!= myvec.end() ; itr++ ){
		if( *itr < 40 )	*itr = 40;
		sum+= *itr;
	}
	printf("%d", sum/5);
	return 0;
}
