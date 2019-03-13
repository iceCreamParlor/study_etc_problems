#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  //freopen("input.txt", "r", stdin);

  vector<int> num_array;
  vector<char> calc;
  int oper[4];  //+ - * /
  int num;  scanf("%d", &num);
  for(int i=0; i<num; i++){
    int temp; scanf("%d", &temp);
    num_array.push_back(temp);
  }
  for(int i=0; i<4; i++){
    scanf("%d", &oper[i]);
  }
  for(int i=0; i<4; i++){
    for(int k=0; k< oper[i]; k++){
      if(i==0){
        calc.push_back('+');
      }else if(i==1){
        calc.push_back('-');
      }else if(i==2){
        calc.push_back('*');
      }else{
        calc.push_back('/');
      }
    }
  }
  vector<int> final_answer;
  int maxim= -1111111111, mini=1111111111;
  sort(calc.begin(), calc.end());
  do{
    int result = num_array[0];
    for(int i=1; i< num_array.size() ; i++){
      if(calc[i-1]=='+'){
        result += num_array[i];
      }else if(calc[i-1]=='-'){
        result -= num_array[i];
      }else if(calc[i-1]=='*'){
        result *= num_array[i];
      }else{
        result /= num_array[i];
      }
    }
    final_answer.push_back(result);
  }while(next_permutation(calc.begin(), calc.end()));

  for(int i=0; i< final_answer.size(); i++){
    maxim = final_answer[i] > maxim? final_answer[i]:maxim;
    mini = final_answer[i] < mini? final_answer[i]:mini;
  }
  printf("%d\n%d", maxim,mini);
  return 0;
}
