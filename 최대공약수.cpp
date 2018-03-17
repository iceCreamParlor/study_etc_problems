//미해결 자리수 문제 고려 안하고 품
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	int a, b;	scanf("%d %d", &a, &b);
	int div= 3;
	while(a%div==0 && b%div==0){
		div += 3;
	}
	div-= 3;
	if(div==0)printf("1");
	for(int i=0; i<div; i++){
		printf("1");
	}
	
	return 0;
}
