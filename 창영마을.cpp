#include <stdio.h>
#include <vector>

using namespace std;

vector<int> myvec;

int current=1;
int main()
{
	freopen("input.txt", "r", stdin);
	char c;
	while( scanf("%c", &c) != EOF ){
		myvec.push_back( c );	
	}
	for(auto itr= myvec.begin(); itr!= myvec.end(); itr++){
		if( *itr =='A' && current==1)	current=2;
		else if( *itr =='A' && current==2)	current=1;
		else if( *itr =='B' && current==2)	current=3;
		else if( *itr =='B' && current==3)	current=2;
		else if( *itr =='C' && current==3)	current=1;
		else if( *itr =='C' && current==1)	current=3;
	}
	printf("%d", current);
	return 0;
}
