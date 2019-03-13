//미해결, 25자리가 넘는 정수형을 어떻게 표현해야 할지
#include <stdio.h>
#include <vector>
int num;
int check[20001];
using namespace std;

vector<unsigned long long> myvec; 

void init( unsigned long long num ){
	if( num > 1111111111111111111 ){
		return;
	}
	if( num%10 != 0 && num%10 != 1 ){
		return;
	}
	//printf("%llu\n", num);
	myvec.push_back(num);
	init( num*10 );
	init( num+1 );
}
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d", &num);
	init( 1ULL );
	for(int i=0; i< num; i++){
		unsigned long long cnt= 1;
		int p;	scanf("%d", &p);
		for( unsigned long long i: myvec ){
			if( i % p ==0 ){
				printf("%d %llu\n",p, i);
				break;
			}
		}
	}
	
	return 0;
}
