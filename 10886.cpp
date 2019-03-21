#include <cstdio>

int main(){
  freopen("input.txt", "r", stdin);
  int num;  scanf("%d", &num);
  int count = 0;
  for(int i = 0 ; i < num ; i++){
    int temp; scanf("%d", &temp);
    count += temp;
  }
  if(count >= num/2 + 1){
    printf("Junhee is cute!");
  } else {
    printf("Junhee is not cute!");
  }

  return 0;
}