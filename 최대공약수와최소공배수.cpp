#include <stdio.h>

int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	
	int n1, n2;	scanf("%d %d", &n1, &n2);
	int o1= n1, o2= n2;
	while(n1 != n2 && n1>0 && n2>0){
		if(n1 > n2)	n1= n1- n2;
		if(n2 > n1) n2= n2- n1;
	}
	int div = n1;
	int times = (o1/div) * (o2/div) * div;
	printf("%d\n%d", div, times);
	
	return 0;
}
/*
200 150
50 150
50 100
50 50
7 2
5 2
3 2
1 2
*/