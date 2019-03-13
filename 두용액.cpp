#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>
#define MAX 987654321
using namespace std;
vector<long long> myvec;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=0; i< num; i++){
		long long temp; scanf("%lld", &temp);
		myvec.push_back(temp);
	}
	sort(myvec.begin(), myvec.end());
	int left= 0, right= myvec.size()-1;
	int l= left, r= right;
	long long inf = MAX;
	while( right > left ){
		long long sum = myvec[left] + myvec[right];
		if(inf > abs(sum)){
			inf = sum;
			l = left ;r= right;
		}
		if( abs(myvec[left] + myvec[right]) > abs(myvec[left+1] + myvec[right]) ){
			left++;
		}
		else right--;
	}
	printf("%lld %lld", myvec[l], myvec[r]);
	return 0;
}
