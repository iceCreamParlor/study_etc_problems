#include <cstdio>
#include <vector>
#include <set>
using namespace std;
int n;
char adj[52][52];
 
int getFriend(int k){
    int res=0;
    vector<int> v;
    set<int> s;
    for(int i=1;i<=n;++i){
        if(adj[k][i]=='Y'){
            s.insert(i);
            v.push_back(i);
            ++res;
        }
    }// �Ÿ��� 1�� ģ���� �߰��ϱ�
    int size= v.size();
    for(int i=0;i<size;++i){
        for(int j=1;j<=n;++j){
            if(j==k)continue;
            if(adj[v[i]][j]=='Y' && s.find(j)==s.end()){
                ++res;
                s.insert(j);
            }
        }
    }// �Ÿ��� 2�� ģ���� �߰��ϱ�
    return res;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;++i)scanf("%s",&adj[i][1]);
    int maxFriend=0;
    for(int i=1;i<=n;++i){
        int k=getFriend(i);
        maxFriend = maxFriend<k?k:maxFriend;
    }
    printf("%d",maxFriend);
}