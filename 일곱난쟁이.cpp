#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> myvec;
int main()
{
	freopen("input.txt", "r", stdin);
	for(int i=0; i<10; i++){
		int temp; scanf("%d", &temp);
		myvec.push_back( temp );
	}
	sort( myvec.begin(), myvec.end() );
	do{
		int sum=0;
		for( int i=0; i<7; i++ ){
			sum+= myvec[i];
		}
		if(sum == 100){
			for(int i=0; i<7; i++){
				printf("%d\n", myvec[i]);
			}
			break;
		}
	}while( next_permutation(myvec.begin(), myvec.end()) );
	return 0;
}
