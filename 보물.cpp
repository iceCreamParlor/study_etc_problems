#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> a, b;
bool cmp(int a, int b){
	return a> b;
}
int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	int mini= 0;
	int num;	scanf("%d", &num);
	
		for(int j=0; j< num; j++){
			int temp;	scanf("%d", &temp);
			a.push_back(temp);
		}
		for(int j=0; j< num; j++){
			int temp;	scanf("%d", &temp);
			b.push_back(temp);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), cmp);
		for(int i=0; i<num ; i++){
			mini += a[i]*b[i];
		}
		printf("%d", mini);
	return 0;
}
