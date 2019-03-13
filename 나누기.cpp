#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> myvec;
int result;
int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	int div;	scanf("%d", &div);
	if(num< 10){
		for(int i=1; ;i++){
			if(i%div==0){
				if(i<10){
					printf("0%d", i);
					break;
				}else{
					printf("%d", i);
					break;
				}
			}
		}
	}else{
		while(num > 0){
			int temp = num% 10;
			num/= 10;
			myvec.push_back(temp);
		}
		
		int len = myvec.size();
		int final_num=0;
		int dig = 100;
		for(int i=2; i< len; i++){
			final_num += myvec[i] * dig;
			dig *= 10;
		}
		//printf("%d", final_num);
		for(int i=0; ; i++){
			if((final_num + i) % div ==0){
				result = i;
				break;
			}
		}
		if(result < 10){
			printf("0%d", result);
		}else{
			printf("%d", result);
		}
	}
	return 0;
}
