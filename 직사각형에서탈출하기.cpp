#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	int x1, y1, x2, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	int result = min(x1, y1);
	result = min(result, x2-x1);
	result = min(result, y2-y1);
	printf("%d", result);
	return 0;
}
