#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
vector<string> myvec;

int main()
{
	freopen("input.txt", "r", stdin);

	

	int num; scanf("%d", &num);
	for(int i=0; i<num; i++){
		bool result= false;
		int cnt; scanf("%d", &cnt);
		string pattern;
		cin>> pattern;
		for(int j=0; j< cnt-1; j++){
			string temp; cin>> temp;
			myvec.push_back(temp);
		}
		for(auto itr= myvec.begin(); itr!= myvec.end(); itr++){
			size_t found= (*itr).find(pattern);
			if( found==0 )	result= true;
		}
		if(result)	printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
