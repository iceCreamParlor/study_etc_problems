#include <cstdio>

int main(){
	freopen("input.txt", "r", stdin);
	int total;int temp=0;
	scanf("%d", &total);
	
	for(int i=0; i<9; i++){
		int t;
		scanf("%d", &t);
		temp+= t;
	}
	printf("%d\n", total-temp);
}
