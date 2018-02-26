#include <stdio.h>
#include <stack>
#include <string>
#include <iostream>

using namespace std;
stack<char> mystack;
int main()
{
	freopen("input.txt", "r", stdin);
	char c;
	string str, bomb;
	while (scanf("%c", &c) != '\n')
	{
		mystack.push(c);
	}
	getline(cin, bomb);
	int length = bomb.size();
	printf("%d", mystack.top());
	return 0;
}
