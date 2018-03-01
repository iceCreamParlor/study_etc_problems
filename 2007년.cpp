#include <stdio.h>

int total;
int main()
{
	freopen("input.txt", "r", stdin);
	int month, day;
	scanf("%d %d", &month, &day);
	for(int i=1; i< month; i++){
		if( i==2 ){
			total+= 28;
		}
		else if( i == 1 || i==3||i==5||i==7||i==8||i==10||i==12){
			total+= 31;
		}
		else
			total+= 30;
	}
	total+= day;
	if(total%7==1)	printf("MON");
	else if(total%7==2)	printf("TUE");
	else if(total%7==3)	printf("WED");
	else if(total%7==4)	printf("THU");
	else if(total%7==5)	printf("FRI");
	else if(total%7==6)	printf("SAT");
	else if(total%7==0)	printf("SUN");
	else printf("error");
	return 0;
}
