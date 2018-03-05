#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

struct score
{
	int i, s, c, l;
	score(int i,int s, int c, int l){
		this-> i = i; this->s = s; this->c= c; this->l= l;
	}
};

vector<score> myvec;
bool cmp(score a, score b){
	if( a.s != b.s )	return a.s > b.s;
	else{
		if( a.c!=b.c )	return a.c < b.c;
		else{
			if( a.l!=b.l )	return a.l < b.l;
		}
	
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	for(int i=1; i<=num; i++){
		int s,c,l;	scanf("%d %d %d", &s, &c, &l);
		myvec.push_back( score(i, s, c, l) );
	}
	sort( myvec.begin(), myvec.end(), cmp );
	printf("%d", myvec[0].i);
	return 0;
}
