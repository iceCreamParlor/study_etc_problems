#include <cstdio>
#include <iostream>
int main()
{
	freopen("input.txt", "r", stdin);
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int num;	std::cin>> num;
	for(int i=0; i<num; i++){
		int a, b;
		std::cin>> a >> b;
		std::cout << a+b << "\n";
	}
	return 0;
}