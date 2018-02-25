#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;
bool check[1000];
int result;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=0; i< num; i++){
		bool group = true;
		fill_n(check, 1000, false);
		string str; cin>> str;
		for(int i=0; i< str.size(); i++){
			if( i==0 )	check[ str[i] ] = true;
			else if( str[i-1] - str[i] != 0 && check[ str[i] ] == true){
				group = false;
				continue;
			}
			else 		check[ str[i] ] = true;
		}
		if(group) result++;
	}
	printf("%d", result);
	return 0;
}
