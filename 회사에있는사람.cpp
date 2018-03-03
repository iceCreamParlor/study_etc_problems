#include <stdio.h>
#include <set>
#include <string>
#include <iostream>

using namespace std;
set<string> s;

int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);	
	while(num--){
		string str, cmd;
		cin >> str >> cmd;
		if( cmd == "enter" ){
			s.insert(str);			
		}
		else if( cmd=="leave" ){
			s.erase(s.find( str ));
		}
	}
	for( auto itr= s.rbegin(); itr!= s.rend(); itr++ ){
		cout << *itr << "\n";	
	}
	return 0;
}
