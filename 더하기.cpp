#include <stdio.h>
#include <vector>
int main()
{
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	while(num--){
		int cnt;	scanf("%d", &cnt );
		int result = 0;
		while(cnt--){
			int temp;	scanf("%d", &temp);
			result+= temp;
		}
		printf("%d\n", result);
	}
	return 0;
}
