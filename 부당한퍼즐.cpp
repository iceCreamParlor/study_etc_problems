#include <stdio.h>
#include <vector>
#include <algorithm>
#define MAX 1000010
int num; 
using namespace std;
vector<int> myvec, ans;
pair<int, int> avail[MAX];

bool equal(pair<int,int> a, pair<int, int> b){
	if( a.first == b.first && a.second == b.second )
		return true;
	else if( a.first == b.second && a.second == b.first )
		return true;
	return false;
}
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d", &num);
	for( int j=0; j< num; j++ ){
		int temp; scanf("%d", &temp);
		myvec.push_back(temp);
	}
	
	for( int j=0; j< num; j++ ){
		int temp; scanf("%d", &temp);
		ans.push_back(temp);
	}
	for( int i=0; i< num; i++ ){
		if( i==0 ){
			pair<int, int> p= { myvec[1], myvec[num-1] };
			avail[ myvec[i] ] = p;
		}
		else if(i== num-1){
			pair<int, int> p= { myvec[0], myvec[num-2] };
			avail[ myvec[i] ] = p;
		}
		else {
			pair<int, int> p= { myvec[i+1], myvec[i-1] };
			avail[ myvec[i] ] = p;
		}
	}
	bool check = true;
	for( int i=0; i< num; i++ ){
		if( i==0 ){
			pair<int, int> p= { ans[1], ans[num-1] };
			if( !equal( p, avail[ ans[i] ] ) ){
				check = false;
			}
		}
		else if( i == num-1 ){
			pair<int, int> p= { ans[num-2], ans[0] };
			if( equal( p, avail[ ans[i] ]) == false )
			{
				check = false;
			}
		}
		else{
			pair<int, int> p= { ans[i-1], ans[i+1] };
			if( equal( p, avail[ ans[i] ]) == false){
				check = false;
			}
		}	
	}
	if( check )	printf("good puzzle");
	else printf("bad puzzle");
	return 0;
}
