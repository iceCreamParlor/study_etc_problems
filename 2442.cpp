#include <iostream>

using namespace std;

int main(){
  freopen("input.txt", "r", stdin);
  int num;  cin >> num;
  int target = 1;
  int blank = num-1;
  while(num*2-1 >= target){
    for(int i = 0 ; i < blank ; i++){
      cout << ' ';
    }
    for(int i = 0 ; i < target ; i++){
      cout << '*';
    }
    target += 2;
    blank--;
    cout << '\n';
  }

  return 0;
}