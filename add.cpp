// 아직 미해결


#include <cstdio>

int main(){
  int a, b; scanf("%d %d", &a, &b);
  int total= 0;
  while(a%10 != 0 && a<=b){
    int temp= a;
    while(temp > 0){
      total+= temp%10;
      temp/=10;
    }
    a++;
  }
  while(b%10 != 9 && a<=b){
    int temp= b;
    while(temp>0){
      total+= temp%10;
      temp/=10;
    }
    b--;
  }
  int mul= 1;


  printf("%d %d", a, b);
  return 0;
}
