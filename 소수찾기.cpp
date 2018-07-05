#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	
	int num;	scanf("%d", &num);
	int result = num;
	while(num--){
		int n;	scanf("%d", &n);
		if(n==1 || n==0 || n==-1){
			result--;
			continue;
		}
		int limit = int(sqrt(n));
		for(int i=2; i<=limit; i++){
			if(n%i == 0){
				result--;
				break;
			}
		}
	}
	printf("%d\n", result);
	return 0;
}