#include <stdio.h>
#include <vector>
#include <algorithm>
#define MAX 12
using namespace std;
int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	vector<int> line;
	int memory[MAX];
	int num;	scanf("%d", &num);
	for(int i=1; i<=num; i++){
		line.push_back(i);
		scanf("%d", &memory[i]);
	}
	do{
		/*
		for(int i=0; i< num ;i++){
			printf("%d", line[i]);
		}printf("\n");
		*/
		int ans[MAX];
		int cnt = line.size();
		for(int i=0; i< cnt; i++){
			// i+1로 집어넣을것 !
			int small=0;
			for(int j=0; j< i; j++){
				if(line[i] < line[j]){
					small++;
				}
			}
			ans[line[i]] = small;
		}
		int check = 1;
		for(int i=1; i<=num; i++ ){
			//printf("%d ", ans[i]);
			if(ans[i] != memory[i]){
				check= 0;
			}
		}//printf("\n");
		if(check){
			for(auto itr= line.begin(); itr!= line.end(); itr++){
				printf("%d ", *itr);
			}
		}
	}while(next_permutation(line.begin(), line.end()));
	return 0;
}
