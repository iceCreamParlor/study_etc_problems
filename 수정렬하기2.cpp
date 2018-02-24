#include <stdio.h>
bool arr[1000010];
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=0; i<num; i++){
		int temp; scanf("%d", &temp);
		arr[temp]=true;
	}
	for(int i=1; i<= 1000000; i++)
		if(arr[i])
		printf("%d\n", i);
}
