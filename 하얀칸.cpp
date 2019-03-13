#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int total= 0;
	char trash;
	for(int i=0;i<8;i++){
		for(int j=0; j<8; j++){
			char c;
			scanf("%c", &c);
			if(!((i+j)%2) && c=='F')	total++;
		}scanf("%c", &trash);
	}
	printf("%d", total);
	return 0;
}
