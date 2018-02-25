#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;
int da[8], ascend[8], descend[8];
bool cmp(int i, int j){
	return i> j;
}
bool compare( int arr1[8], int arr2[8] ){
	bool check= true;
	for(int i=0; i<8; i++){
		if(arr1[i] != arr2[i])
			check= false;
	}
	return check;
}
int main()
{
	freopen("input.txt", "r", stdin);
	for(int i=0; i<8 ; i++){
		scanf("%d", &da[i]);
		ascend[i] = da[i];
		descend[i] = da[i];
	}
	sort(&ascend[0], &ascend[7]+1);
	sort(&descend[0], &descend[7]+1, cmp);
	for(auto itr= &descend[0] ; itr!= &(descend[7])+1 ; itr++)
		printf("%d ", *itr);
	if( compare(da, ascend) )	printf("ascending");
	else if( compare(da, descend) )	printf("descending");
	else printf("mixed");
	return 0;
}
