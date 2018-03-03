#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int a,b;	scanf("%d %d", &a, &b);
	printf("%d", a*b-1);
	return 0;
}
