#include <cstdio>

int solution(int n){
	int sum = n;
	while(n != 0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int main(){
	bool arr[10001];
	for(int i=1 ; i<10001; i++){
		int num = solution(i);
		if(num <= 10001){
			arr[num] = true;
		}
	}
	for(int i=1; i<10000 ; i++){
		if(!arr[i])
			printf("%d\n", i);
	}
	return 0;
}
