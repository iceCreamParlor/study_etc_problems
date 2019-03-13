#include <stdio.h>
#include <vector>

std::vector<int> myvec;
using namespace std;
int result;
int main()
{
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	while(num--){
		int temp; scanf("%d", &temp);
		myvec.push_back(temp);
	}
	for( auto itr= myvec.begin(); itr!= myvec.end()-1; itr++ ){
		while( *itr >= *(itr+1) ){
			*itr -= 1;
			result++;
		}
	}
	printf("%d", result);
	return 0;
}
