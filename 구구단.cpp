#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=1; i<=9; i++){
		printf("%d * %d = %d\n", num, i, num*i);
	}
	return 0;
}
