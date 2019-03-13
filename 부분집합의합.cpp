#include <stdio.h>
#include <vector>

using namespace std;
vector<int> myvec;
int num, target;
int result, sum;
void go( int index, int sum ){
	if( index >= num ){
		if( sum == target )
			result++;
		return;
	}

	go(index+1, sum);
	go(index+1, sum+ myvec[index]);
}
int main()
{
	freopen("input.txt", "r", stdin);
	 scanf("%d %d", &num, &target);
	for(int i=0; i<num; i++){
		int temp; scanf("%d", &temp);
		myvec.push_back(temp);
	}
	go( 1, 0 );
	go( 1, myvec[0] );
	if( target==0  )	result--;
	printf("%d", result);
	return 0;
}
