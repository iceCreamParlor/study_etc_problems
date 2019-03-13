#include <stdio.h>
#include <cmath>

int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	while(num--){
		int num1, num2;	scanf("%d %d", &num1, &num2);
		int temp= 1;
		for(int i=0; i< num2; i++){
			temp = (temp*num1)%10;
		}
		if(temp==0)	printf("10\n");
		else printf("%d\n", temp);
	}
	
	return 0;
}
