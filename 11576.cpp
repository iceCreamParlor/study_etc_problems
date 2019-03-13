#include <cstdio>
#include <iostream>
#include <cmath>
#include <stack>
#include <string>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  freopen("input.txt", "r", stdin);
  int fromDigit, toDigit; scanf("%d %d", &fromDigit, &toDigit);
  int digit;  scanf("%d", &digit);
  int multiplier = pow(fromDigit, digit);
  int digit10 = 0;
  stack<int> result;

  while(digit--){
    int num;  scanf("%d", &num);
    multiplier = pow(fromDigit, digit);
    digit10 += multiplier * num;
  }
  while(digit10 > 0){
    int res = digit10 % toDigit;
    digit10 /= toDigit;
    result.push(res);
  }
  while(result.size()){
    printf("%d ", result.top());
    result.pop();
  }
  printf("\n");

  return 0;
}

