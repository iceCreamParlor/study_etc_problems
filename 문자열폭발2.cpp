#include <stdio.h>
#include <stack>
#include <string>
#include <iostream>

using namespace std;
stack<char> mystack, answer;
int main()
{
	freopen("input.txt", "r", stdin);
	char c;
	string str, bomb;
	int cnt= 0;
	getline(cin, str);
	getline(cin, bomb);
	int length = bomb.size();
	for(int i=0; i< str.size(); i++){
		mystack.push( str[i] );
		if( str[i] == bomb[cnt] ){
			if(cnt == bomb.size()-1){
				cnt= 0;
				for(int k=0; k< bomb.size(); k++){
					mystack.pop();
				}
			}
			else{
				cnt++;
			}
		}
	}
	
	return 0;
}
