#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;

int main(){
  freopen("input.txt", "r", stdin);
  stack<int> s, answer;
  int c;

  while(scanf("%1d", &c) != EOF){
    s.push(c);
  }
  int count = 0;
  int result = 0;
  int multiplier = 1;
  while(s.size()){
    count++;
    result += s.top() * multiplier;
    multiplier *= 2;
    s.pop();
    if(count%3 == 0 || s.empty()){
      answer.push(result);
      multiplier = 1;
      result = 0;
    }
  }
  while(answer.size()){
    printf("%d", answer.top());
    answer.pop();
  }
  printf("\n");
  return 0;
}