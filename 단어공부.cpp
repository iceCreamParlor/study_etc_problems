#include <stdio.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> answer;
int alphabet[200];
int maxim;
int main()
{
	freopen("input.txt", "r", stdin);
	char str[1000000];	scanf("%s", str);	
	int len= strlen(str);
	for(int i=0; i< len; i++){
		char c= str[i];
		if(c<= 122 && c>= 97) c= c-32;
		alphabet[c]++;
	}
	for(int i=0; i<= 199; i++){
		maxim= max(maxim, alphabet[i]);
	}
	for(int i=0; i<= 199; i++){
		if(alphabet[i] == maxim){
			answer.push_back(i);
		}
	}
	if( answer.size() >1 )	printf("?");
	else printf("%c", answer[0]);
	return 0;
}