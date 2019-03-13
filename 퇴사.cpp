#include <stdio.h>
#include <vector>
#define MAX 16

using namespace std;
vector<int> v;
int day[MAX], pay[MAX];
void travel(int start, int num, int payment){
	for(int i=start; i<num ; i++){
		if(i+day[i] == num){
			v.push_back(payment+pay[i]);
		}
		if(i+day[i] < num){
		travel(i+day[i], num, payment + pay[i]);
		}
		else{
			if(i==num-1 && day[i]==1)
				v.push_back(payment+pay[i]);
			v.push_back(payment);
		}
	}	
}
int main()
{
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	int max = -1;
	for(int i=0; i<num ; i++){
		int temp;		
		scanf("%d", &temp);day[i] = temp;	
		scanf("%d", &temp);pay[i] = temp;
	}
	for(int i=0; i<num ; i++){
		travel(i, num, 0);
	}
	int cnt = v.size();
	for(int i=0; i<cnt ; i++){
		max = max<v[i]?v[i]:max;
	}
	printf("%d", max);
	return 0;
}
