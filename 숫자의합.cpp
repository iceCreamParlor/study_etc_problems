#include <stdio.h>
int sum;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=0; i< num; i++){
		int temp; scanf("%1d", &temp);
		sum+= temp;
	}
	printf("%d", sum);
	return 0;
}
