//시간초과
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

struct node
{
	char id[20];	bool check;	int cnt;
	node(char id[20]){
		strcpy(this->id, id);
		check = false;
		cnt= 0;
	}
};

vector<node> myvec;
int find(char inp[20]){
	int check= -1;
	for(int i=0; i< myvec.size(); i++){
		if( strcmp(myvec[i].id, inp) == 0 ){
			return i;
		}
	}
	return check;
}
int main(){
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	for(int i=0; i<num; i++){
		int trash;	scanf("%d", &trash);
		char id[20];	scanf("%s", id);
		int ans;	scanf("%d", &ans);
		if(strcmp(id, "megalusion") != 0 ){
			switch(ans){
				case 4: {
					if( find(id) >=0 ){
						int index = find(id);
						if(myvec[index].check != 1){
							myvec[index].check= 1;
							myvec[index].cnt++;
						}
						else{
							scanf("%d", &trash);
							scanf("%d", &trash);
							scanf("%d", &trash);
							scanf("%d", &trash);
							continue;
						}
					}
					else{
						node temp = node(id);
						myvec.push_back(temp);
						int index = find(id);
						myvec[index].check= 1;
						myvec[index].cnt++;
					}
				}
				default:{
						if( find(id) >=0 ){
							int index = find(id);
							if(myvec[index].check != 1){
								myvec[index].cnt++;
							}else{
								scanf("%d", &trash);
								scanf("%d", &trash);
								scanf("%d", &trash);
								scanf("%d", &trash);
								continue;
							}
						}
						else{
							node temp = node(id);
							myvec.push_back(temp);
							int index = find(id);
							myvec[index].cnt++;
						}
					}	
				}
		}
		
		scanf("%d", &trash);
		scanf("%d", &trash);
		scanf("%d", &trash);
		scanf("%d", &trash);
	}
	int answer_num=0; int total_num=0;
	for(auto itr= myvec.begin() ; itr!= myvec.end(); itr++){
		if((*itr).check== 1){
			answer_num++;
			total_num +=	(*itr).cnt;
		}
	}
	//printf("%d %d %d\n", answer_num, total_num, myvec.size());
	//printf("%s\n", myvec[0].id);
	//printf("%d\n", strcmp(myvec[0].id, "baekjoon"));
	if(total_num==0){
		printf("0");
	}else{
		printf("%.15lf", (double)answer_num/(double)total_num * 100);
	}
	return 0; 
}