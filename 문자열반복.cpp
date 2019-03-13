#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=0; i< num; i++){
		int recur; string str;
		scanf("%d", &recur);
		cin>> str;
		for( int i=0; i< str.size(); i++ ){
			for(int j=0; j< recur; j++){
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
