#include <cstdio>
#include <algorithm>
#include <vector>
#define MAX 100001

using namespace std;
vector<int> myvec;
int  arr[MAX];
int maxim, sum;
int main(){
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=0; i<num; i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0; i< num; i++){
		if( arr[i]<0  ){
			myvec.push_back(sum);
			sum= 0;
		}
		else sum+= arr[i];
	}
	for(auto itr= myvec.begin(); itr!= myvec.end(); itr++){
		maxim= max(maxim, *itr);
	}
	printf("%d", maxim);
}
