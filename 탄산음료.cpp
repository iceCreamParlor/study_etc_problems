#include <stdio.h>


int arr[3];
int main()
{
	freopen("input.txt", "r", stdin);
	scanf("%d %d %d", &arr[0],&arr[1],&arr[2]);
	int bottle = arr[0]+ arr[1];
	int result = 0;
	while( bottle >= arr[2] ){
		int temp = bottle/ arr[2];
		result += temp; 
		bottle %= arr[2];
		bottle += temp;
	}
	printf("%d", result);
	return 0;
}
