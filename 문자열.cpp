#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	while(num--){
		string str;
		cin>>str;
		printf("%c%c\n",str[0], str[str.size()-1]);
	}
	return 0;
}
