#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> myvec;
int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	while(num--){
		int temp;	scanf("%d", &temp);
		myvec.push_back(temp);
	}
	sort(myvec.begin(), myvec.end());
	printf("%d", myvec[0]*myvec[myvec.size()-1]);
	
	return 0;
}
