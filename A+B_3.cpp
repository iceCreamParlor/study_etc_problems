#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=0; i< num; i++){
		int a, b; scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
	}
	return 0;
}
