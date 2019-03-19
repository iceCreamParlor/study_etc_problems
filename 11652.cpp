#include <cstdio>
#include <algorithm>
#include <vector>
#define MAX 1000010
using namespace std;

int main(){
  freopen("input.txt", "r", stdin);
  vector<long long> v;
  int num;  scanf("%d", &num);
  while(num--){
    long long temp; scanf("%lld", &temp);
    v.push_back(temp);
  }
  sort(v.begin(), v.end());
  int maxCombo = 0; int combo = 0; long long maxInt = -1;
  int size = v.size();
  for(int i = 0 ; i < size ; i++){
    if(i==0){
      combo = 1;
    } else {
      if(v[i] == v[i-1]){
        combo+=1;
      }else{
        if(maxCombo < combo){
          maxCombo = combo;
          maxInt = v[i-1];
          combo = 1;
        }
      }
    }
  }
  printf("%lld\n", maxInt);
  return 0;
}