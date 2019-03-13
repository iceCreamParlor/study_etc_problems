#include <stdio.h>
#include <vector>

using namespace std;
vector<int> myvec;
int room_num[10];
int maxim;

int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	while(num> 0){
		int temp = num%10;
		myvec.push_back(temp);
		num /= 10;
	}
	for(int i: myvec){
		room_num[i]++;
	}
	if( (room_num[6] + room_num[9])%2 ==0 ){
		room_num[6] = (room_num[6] + room_num[9])/2;
	}
	else if( (room_num[6] + room_num[9])%2 ==1 ){
		room_num[6] = (room_num[6] + room_num[9])/2 +1;
	}
	room_num[9] = room_num[6];
	for(int i: room_num){
		maxim = max(maxim, i);
	}
	if( maxim == 0 )
		maxim=1;
	printf("%d", maxim);
	return 0;
}
