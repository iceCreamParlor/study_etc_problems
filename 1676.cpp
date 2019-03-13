#include <cstdio>

using namespace std;

int main(){
  freopen("input.txt", "r", stdin);
  int num;  scanf("%d", &num);
  int divide = 5;
  int result = 0;
  while(num >= divide){
    result += num / divide;
    divide *= 5;
  }
  printf("%d\n", result);

  return 0;
}