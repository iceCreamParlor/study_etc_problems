#include <stdio.h>
#include <iostream>
using namespace std;
string inp;
int main()
{
	freopen("input.txt", "r", stdin);
	while( getline(cin, inp) )
		cout << inp<< endl;
	return 0;
}
