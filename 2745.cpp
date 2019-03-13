#include <cstdio>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
  freopen("input.txt", "r", stdin);
  ios::sync_with_stdio(false);
  string str; cin >> str;
  int digit; cin >> digit;
  int multiplier = 1;
  int result = 0;
  stack<int> s;

  for(int i = 0 ; i < str.size() ; i++){
    int c;
    // cout << (str[i] <= '9');
    if(str[i] >= '0' && str[i] <= '9'){
      c = str[i] - '0';
      
    } else {
      c = str[i] - 'A' + 10;
    }
    s.push(c);
  }
  while(s.size()){
    int c = s.top();
    result += c  * multiplier;
    multiplier *= digit;
    s.pop();
  }

  printf("%d\n", result);
  return 0;
}