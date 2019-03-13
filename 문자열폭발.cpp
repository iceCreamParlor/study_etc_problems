#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	string str, bomb;
	string ans;
	getline(cin, str);
	getline(cin, bomb);
	int start= 0;
	while( str.find(bomb)!= -1 ){
		int index = str.find(bomb);
		
		str.erase( str.begin() + index, str.begin() + index +bomb.size() );

	}
	if( str.empty() )	printf("FRULA");
	else cout << str;
	return 0;
}
