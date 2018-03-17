#include <stdio.h>

int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	int min = 100000000; int max= -1000000000;
	int num;	scanf("%d", &num);
	while(num--){
		int temp;	scanf("%d", &temp);
		if(min > temp)	min= temp;
		if(max < temp)	max = temp;
	}
	printf("%d %d", min, max);
	
	return 0;
}
