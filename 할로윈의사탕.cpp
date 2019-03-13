#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	while(num--){
		int total, div;	scanf("%d %d", &total, &div);
		int result = total % div;
		int resid = total / div;
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", resid, result);
	}
	return 0;
}

