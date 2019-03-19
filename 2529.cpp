#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>

#define MAX 10
using namespace std;

char oper[MAX];

bool isCorrect(int* numbers, int num);

int main(){
  freopen("input.txt", "r", stdin);
  int num;  scanf("%d\n", &num);
  int maxNumbers[num], minNumbers[num];

  for(int i = 0 ; i < num+1 ; i++){
    maxNumbers[i] = 9 - i;
    minNumbers[i] = i;
  }


  for(int i = 0 ; i < num ; i++){
    scanf("%c ", &oper[i]);
  }
  // MAX
  do{
    // printf("%d %d %d\n", maxNumbers[0], maxNumbers[1], maxNumbers[2]);
    if(isCorrect(maxNumbers, num)){
      for(int i = 0 ; i <= num ; i++){
        printf("%d", maxNumbers[i]);
      }
      printf("\n");
      break;
    }

  }while(prev_permutation(maxNumbers, maxNumbers + num + 1));

  do{
    // printf("%d %d %d\n", minNumbers[0], minNumbers[1], minNumbers[2]);
    if(isCorrect(minNumbers, num)){
      for(int i = 0 ; i <= num ; i++){
        printf("%d", minNumbers[i]);
      }
      printf("\n");
      break;
    }

  }while(next_permutation(minNumbers, minNumbers + num + 1));
  return 0;
}

bool isCorrect(int* numbers, int num){
  bool result = true;
  for(int i = 0 ; i < num ; i++){
    
    if(oper[i] == '<'){
      
      if(numbers[i] > numbers[i+1]){
        return false;
      }
      
    }else if(oper[i] == '>'){
      if(numbers[i] < numbers[i+1]){
        return false;
      }
      
    }else{
      printf("ERROR OCCURED(UNKNOWN OPERAND)\n");
    }
  }
  return true;
}