#include <stdio.h>
#include <iostream>
int num1[3], num2[3];
int main()
{
	freopen("input.txt", "r", stdin);
	for(int i=2; i>=0 ;i--)		scanf("%1d", &num1[i]);
	
	for(int i=2; i>=0 ;i--)		scanf("%1d", &num2[i]);
	
	int num_1 = num1[0] * 100 + num1[1] * 10 + num1[2];
	int num_2 = num2[0] * 100 + num2[1] * 10 + num2[2];
	if(num_1 > num_2)	std::cout << num_1;
	else std::cout << num_2;
}
