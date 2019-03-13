#include <stdio.h>
int cnt;
int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	int n;	scanf("%d", &n);
	int num= 64;
	while(n>0){
		while( num > n ){
			num/= 2;
		}
		n-= num;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}
