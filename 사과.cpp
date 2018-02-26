#include <stdio.h>
#include <vector>
struct node
{
	int student, apple;
	node(int s, int a){
		student = s; apple = a;
	}
};

std::vector<node> myvec;
int result;

int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=0; i< num; i++){
		int s, a;
		scanf("%d %d", &s, &a);
		node temp = node(s, a);
		myvec.push_back(temp);
	}
	for(auto itr= myvec.begin(); itr!= myvec.end() ; itr++){
		result += (*itr).apple % (*itr).student;
	}
	printf("%d", result);
	return 0;
}
