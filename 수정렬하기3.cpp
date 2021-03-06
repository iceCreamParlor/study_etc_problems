#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;
vector<short> myvec;


void merge(int left, int right, int mid){
	vector<short> tempvec;
	int i= left; int j= mid+1; int k= left;

	while(i<= mid && j<= right){
		if( myvec[i] < myvec[j] ){
			tempvec.push_back(myvec[i]);
			i++;
		}else{
			tempvec.push_back(myvec[j]);
			j++;
		}
	}
	if( i> mid ){
		for(int ind= j; ind<= right; ind++){
			tempvec.push_back(myvec[ind]);
		}
	}else{
		for(int ind= i; ind<= mid; ind++){
			tempvec.push_back(myvec[ind]);
		}
	}
	int t= 0;
	for(int ind= left; ind <= right; ind++){
		myvec[ind] = tempvec[t++];
	}
}
void merge_sort(int left, int right){
	if(left < right){
		int mid = (left + right)/2;
		merge_sort(left, mid);
		merge_sort(mid+1, right);
		merge(left, right, mid);
	}
}

int main()
{
	//freopen("input.txt", "r", stdin);
	int num;	
	cin >> num;
	for(int i=0; i< num; i++){
		int temp; scanf("%d", &temp);
		myvec.push_back(temp);
	}
	merge_sort(0, num-1);
	for(int i: myvec){
		printf("%d\n", i);
	}
	return 0;
}
                                                     