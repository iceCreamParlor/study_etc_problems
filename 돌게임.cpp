#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	if(num%2 == 1){
		printf("SK");
	}
	else printf("CY");
	return 0;
}
