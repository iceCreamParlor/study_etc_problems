#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	int a, b, dig;	scanf("%d %d %d", &a, &b, &dig);
	dig++;
	int prev = a, div;
	while( dig> 0 ){
		div = prev / b;
		prev = (prev - div*b)* 10;
		dig--;
	}
	printf("%d", div);
	return 0;
}
