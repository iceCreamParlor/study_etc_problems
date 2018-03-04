#include <stdio.h>

int result;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	num = 1000 - num;
	while( num >= 500 ){
		num -= 500;
		result++;
	}
	while( num >= 100 ){
		num -= 100;
		result++;
	}
	while( num >= 50 ){
		num -= 50;
		result++;
	}
	while( num >= 10 ){
		num -= 10;
		result++;
	}
	while( num >= 5 ){
		num -= 5;
		result++;
	}
	while( num >= 1 ){
		num -= 1;
		result++;
	}
	printf("%d", result);
	return 0;
}
