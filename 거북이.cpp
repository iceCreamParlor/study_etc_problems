#include <stdio.h>
#include <algorithm>
using namespace std;
int line[4];
int main()
{	
	scanf("%d %d %d %d", &line[0], &line[1], &line[2], &line[3]);
	sort(&line[0], &line[3]+1);
	printf("%d", line[0] * line[2]);
	return 0;
}
