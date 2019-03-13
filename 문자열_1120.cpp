#include <stdio.h>
#include <vector>
#define MAX 100
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	vector<int> ans;
	char s1[MAX], s2[MAX];
	int s1l=0, s2l=0; int i=0;
	char temp;
	while(scanf("%c", &temp) != EOF )	{
		if(temp==' ')	break;
		s1[i] = temp;
		i++; s1l++;
	}
	i=0;
	while(scanf("%c", &s2[i]) != EOF ){
		i++;	s2l++;
	}
	int result;
	for(int i=0; i<= s2l-s1l; i++){
		result = 0;
		for(int j=0; j<s1l ; j++){
			if( s1[j]-s2[i+j] != 0 )	result++;
		}
		ans.push_back(result);
	}
	result = 99999;
	for(auto itr= ans.begin(); itr!= ans.end(); itr++)
		result = (*itr < result)? *itr:result;
	
	printf("%d", result);
	return 0;
}
