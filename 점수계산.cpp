#include <stdio.h>
#include <vector>
#include <algorithm>
int sum;

using namespace std;
vector<int> myvec, original, ans;
int main()
{
	freopen("input.txt", "r", stdin);
	
	for(int i=0; i< 8 ; i++){
		int temp;	scanf("%d", &temp);
		myvec.push_back(temp);
		original.push_back(temp);
	}
	std::sort(myvec.begin(), myvec.end());
	for(int i=3; i< 8; i++){
		sum+= myvec[i];
		for(int j=0; j<8; j++){
			if( myvec[i] == original[j] ){
				ans.push_back(j+1);
			}
		}
	}
	printf("%d\n", sum);
	std::sort(ans.begin(), ans.end());
	for(auto i: ans){
		printf("%d ", i);
	}
	return 0;
}
