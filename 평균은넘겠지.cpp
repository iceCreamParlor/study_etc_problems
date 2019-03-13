#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;


int main()
{
	freopen("input.txt", "r", stdin);
	int num; cin >> num;
	for(int i=0; i< num; i++){
		vector<int> myvec;
		int ans=0;
		int cnt; cin >> cnt;
		int sum= 0, avg=0;
		for(int j=0 ; j< cnt; j++){
			int temp; cin >> temp;
			myvec.push_back(temp);
			sum+= temp;
		}
		avg = sum/ cnt;
		for( auto itr= myvec.begin(); itr!= myvec.end(); itr++ ){
			//cout << *itr << " " ;
			if( *itr> avg ){
				ans++;
			}
		}
		//cout << avg;
		printf("%.3lf%%\n", (double)ans/(double)cnt*100);
	}
	return 0;
}
