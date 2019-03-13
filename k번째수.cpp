#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	int num, K;	scanf("%d %d", &num, &K);
	
	int* arr = new int[num];
	
	for(int i=0; i< num ; i++){
		int temp;	scanf("%d", &temp);
		arr[i] = temp;
	}
	sort(arr, arr+num);
	printf("%d", arr[K-1]);
	delete []arr;
	return 0;
}