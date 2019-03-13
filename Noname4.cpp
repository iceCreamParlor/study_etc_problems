#include <cstdio>
#include <string>
#include <iostream>

using namespace std;
int main(){
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for( int i=0; i< num; i++ ){
		int result = 0;
		int cnt= 0;
		string str; cin >> str;
		for( int j=0; j< str.size(); j++ ){
			if( str[j] == 'O' )	{
				cnt++;
				result += cnt;
			}
			else if( str[j] == 'X' ){
				cnt= 0;
			}
		}
		printf("%d\n", result);
	}
	return 0;
}