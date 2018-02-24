#include <stdio.h>
#include <vector>
#include <algorithm>
#define MAX 1000001
bool check[MAX];
struct node
{
	int a, b;
};
using namespace std;


bool cmp( node node1, node node2 ){
	return node1.b-node1.a > node2.b- node2.a;
}
int main()
{
	freopen("input.txt", "r", stdin);
	for(int i=2; i*i< MAX; i++){
		if(check[i])
			for( int j=i*i; j <MAX; j+= i ){
				check[j]=false;
			}
			check[1]= false;
	}
	
	int num= 1;
	do{
		vector<node> myvec;
		bool FuckYouGoldberg= false;
		scanf("%d", &num);
		if(!num) break;
		
		for( int i=3; i<= num/2; i+= 2 ){
			if( check[i] && check[num-i] ){
				node temp; temp.a=i; temp.b= num-i;
				myvec.push_back(temp);
				FuckYouGoldberg= true;
			}
		}
		
		sort(myvec.begin(), myvec.end(), cmp);
		if( FuckYouGoldberg ){
			printf("%d = %d + %d\n", num, myvec[0].a, myvec[0].b);
		}
		
		else{
			printf( "Goldbach's conjecture is wrong.\n" );
		}
		
	}while(num!=0);
	
	return 0;
}
