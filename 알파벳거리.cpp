#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	int num ; scanf( "%d", &num );	
	while(num--){
		printf("Distances: ");
		string str1, str2;
		cin >>str1 >>str2;
		for( int i=0; i< str1.size(); i++ ){
			if( str2[i] - str1[i] <0 ){
				printf("%d ", str2[i] - str1[i] + 26);
			}
			else	printf("%d ", str2[i] - str1[i] );
		}
		printf("\n");
	}
	return 0;
}
