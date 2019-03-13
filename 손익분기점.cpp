#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int fix, var, price;
	scanf("%d %d %d", &fix, &var, &price);
	int ans; 

	if(price - var <=0)
		ans = -1;
	else 
		ans = fix / (price - var) + 1;
	printf("%d", ans);
	return 0;
}
