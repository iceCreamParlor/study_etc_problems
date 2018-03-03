#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
std::vector<int> myvec, ans;
int maxim, index;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	int  j=0, c=0, b=0;
	double s= 0;
	short check[num+10];

	for(int i=0; i< num ; i++){
		int temp;		scanf("%d", &temp);
		myvec.push_back(temp);
		s+= (double)temp;
		check[temp]++;
	}
	std::sort(myvec.begin(), myvec.end());
	s /= (double)num;
	s = round(s);

	b = myvec[num-1] - myvec[0];
	
	
	


	printf("%d\n%d\n%d\n%d", (int)s, j, c, b);
	

	return 0;
}
