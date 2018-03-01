#include <stdio.h>
int floor, ho, number;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for( int i=0; i< num; i++ ){
		
		int total_floor; scanf("%d", &total_floor);
		int total_room; scanf("%d", &total_room);
		int total_number; scanf("%d", &total_number);
		if( total_number % total_floor ==0 ){
			ho = total_number/total_floor;
			floor = total_floor;
		}
		else{
			ho = 1 + total_number/total_floor;
			floor = total_number % total_floor;
		}
		if( ho >=10 )
			printf("%d%d\n",floor, ho);
		else
			printf("%d0%d\n", floor, ho);
	}
}
