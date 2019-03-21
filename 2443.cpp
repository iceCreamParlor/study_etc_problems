#include <iostream>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  freopen("input.txt", "r", stdin);
  int num;  cin >> num;
  int blank = 0;
  int cnt = num * 2 - 1;

  while(cnt > 0){
    for(int i = 0 ; i < blank ; i++){
      cout << ' ';
    }
    for(int i = 0 ; i < cnt ; i++){
      cout << '*';
    }
    cout << '\n';
    blank += 1;
    cnt -= 2;
  }
  

  
  

  return 0;
}