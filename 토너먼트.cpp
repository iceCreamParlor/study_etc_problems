#include <stdio.h>

int result;
int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	int round;	scanf("%d", &round);
	int p1;	scanf("%d", &p1);
	int p2;	scanf("%d", &p2);
	while(round>0){
		result++;
		for(int i=1; i<= round; i+=2){
			if((p1==i && p2==i+1) || (p2==i && p1==i+1)){
				round=0;
			}
		}
		round = (round+1)/2;
		p1= (p1+1)/2;
		p2= (p2+1)/2;
	}
	printf("%d", result);
	return 0;
}
