#include <stdio.h>
#include <stack>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	int cnt;	scanf("%d", &cnt);
	int trash;
	
	while(cnt--){
		stack<int> s;
		scanf("%d", &trash);
		char temp;
		int total=0;
		for(int i=2; i>=0; i--){
			scanf("%c", &temp);
			s.push(temp);
			int ad=(s.top()-65);
			for(int k=i; k> 0; k--){
				ad = ad * 26;
			}
			total+= ad;
			s.pop();
		}
		scanf("%c", &temp);
		int num;	scanf("%d", &num);
		total = total- num;
		if( (int)abs(total) <= 100 )
			printf("nice\n");
		else
			printf("not nice\n");
	}
	return 0;
}
