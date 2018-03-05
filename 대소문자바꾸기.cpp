#include <stdio.h>
int main()
{
	freopen("input.txt", "r", stdin);
	char c;
	while( scanf("%c", &c)!= EOF ){
		if( 65<=c && c< 97 )
			c+= 32;
		else c-= 32;
		printf("%c", c);
	}
	return 0;
}
