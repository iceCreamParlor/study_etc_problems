#include <stdio.h>
#include <cmath>
#define MAX 10010

using namespace std;
int result;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int j=1; j<= num; j++){
		for(int i=1; i<= sqrt((double)j); i++){
			{
				if( j % i== 0 )	{result++;
				//printf("%d %d\n", j, i);
				}
			}
		}
	}
	//printf("%lf", abs(sqrt( (double)5 ) - round( sqrt( (double)5 ) )));
	printf("%d", result);
	return 0;
}
