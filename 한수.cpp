#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int result = 99;
	int num;	scanf("%d", &num);	
	for(int i=100; i<= num; i++){
		int jump = (i%100)/10 - (i%10);
		int cp = i;
		int isTrue=1;
		while(cp >0 ){
			cp /= 10;
			if(cp<10)	break;
			if(jump != (cp%100)/10 - cp%10){
				isTrue=0;break;
			}
		}
		if(isTrue)	result++;
	}
	if(num<100)	printf("%d", num);
	else printf("%d", result);
	return 0;
}
