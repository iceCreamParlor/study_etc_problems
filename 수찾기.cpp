#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> myvec, target;

int main()
{
	freopen("input.txt", "r", stdin);
	int num1; scanf("%d", &num1);
	for(int i=0; i< num1; i++){
		int temp;	scanf("%d", &temp);
		myvec.push_back(temp);
	}
	int num2; scanf("%d", &num2);
	for(int i=0; i< num2; i++){
		int temp;	scanf("%d", &temp);
		target.push_back(temp);
	}
	sort(myvec.begin(), myvec.end());

	/*
		1 2 3 4 5   / 0 4 / 0 2 / 0 1
	*/
	
	for( int i=0; i< num2; i++ ){
		int left = 0; int right = myvec.size()-1;
		bool check = false;

		while(left <= right){
			int middle = (left+right)/2;
			if( target[i] == myvec[middle] ){
				check = true;	
				break;
			}
			else if( target[i] < myvec[middle] ){
				right = middle-1;
			}
			else if( target[i] > myvec[middle] ){
				left = middle+1;
			}
		}
		
		printf("%d\n", check);
	}
	return 0;
}
