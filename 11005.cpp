#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int calculateDigit(int num);

int main(){
  ios::sync_with_stdio(false);
  freopen("input.txt", "r", stdin);
  stack<int> s;
  int num, digit;  cin >> num >> digit;
  int result = 0;

  while(num > 0){
    result = num%digit;  
    
    if(result < 10){
      
    } else {
      result = calculateDigit(result);
    }
    s.push(result);
    num /= digit;
  }
  while(s.size()){
    if(s.top()<10){
      printf("%d", s.top());
    } else {
      printf("%c", s.top());
    }
    s.pop();
  }
  printf("\n");
  return 0;
}

int calculateDigit(int num){
  return num-10+'A';
}