#include <cstdio>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    while(1){
        vector<int> v;
        int temp;   scanf("%d", &temp);
        if(temp==-1){
            break;
        }else{
            v.push_back(temp);
            while(1){
                int temp2;  scanf("%d", &temp2);
                if(!temp2){
                    int result = 0;
                    sort(v.begin(), v.end());
                    set<int> s;
                    for(vector<int>::iterator itr= v.begin() ; itr < v.end() ; itr++){
                        if(!(s.insert(*(itr)).second)){
                            result++;
                        }
                        if(!(s.insert(*(itr)*2).second)){
                            result++;
                        }
                    }
                    printf("%d\n", result);
                    break;
                }else{
                    v.push_back(temp2);
                }
            }
        }
    }

    return 0;
}