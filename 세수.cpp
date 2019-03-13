#include <stdio.h>
#include <algorithm>

using namespace std;
int arr[3];
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	sort(&arr[0], &arr[3]);
	printf("%d", arr[1]);
	return 0;
}
