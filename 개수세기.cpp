#include <stdio.h>
#include <vector>

std::vector<int> myvec;
int result;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=0; i< num; i++){
		int temp; scanf("%d", &temp);
		myvec.push_back(temp);
	}
	int target; scanf("%d", &target);
	for(auto itr= myvec.begin(); itr!= myvec.end(); itr++){
		if(*itr == target)
			result++;
	}
	printf("%d", result);
	return 0;
}
