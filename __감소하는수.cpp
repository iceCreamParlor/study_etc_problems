#include <cstdio>
#include <vector>
using namespace std;
long long ans[1000000]; int ind=1;

bool check(int x){
  while(x>=10){
    if(x%10 >= (x%100)/10){
      return false;
    }
    x/=10;
  }
  return true;
}
int main(){
  freopen("input.txt", "r", stdin);
  int num;  scanf("%d", &num);

    for(int i=1; ; i++){
      if(check(i)){
        ans[ind] = i;
        ind++;
      }
      if(ind== num+1) break;
    }


  printf("%lld", ans[num]);
  return 0;
}
