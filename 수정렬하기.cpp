#include <stdio.h>
#include <set>

using namespace std;

set<int> s;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	while(num--){
		int temp; scanf("%d", &temp);
		s.insert(temp);
	}
	for(auto itr: s){
		printf("%d\n", itr);
	}
	return 0;
}
