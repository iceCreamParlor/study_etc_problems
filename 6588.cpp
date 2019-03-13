#define MAX 1000011
#include <cstdio>
#include <iostream>

using namespace std;

int prime[MAX];
int pn;
bool check[MAX+1];

int main(){
  freopen("input.txt", "r", stdin);
  for(int i = 2; i <= MAX; i++){
    if(check[i] == false){
      prime[pn++] = i;
      for(int j = i+i ; j<= MAX ; j+= i){
        check[j] = true;
      }
    }
  }
  while(1){
    int n;  scanf("%d", &n);
    if(n==0)
      break;
    int max = -10000000;
    int maxInd = 0;
    for(int i = 1 ; i < pn ; i++){

      if(n-prime[i] >= 0 && n-prime[i] < MAX && check[n - prime[i]] == false && n-prime[i] > 0){
        if(max < n-prime[i]){
          max = n-prime[i];
          maxInd = i;
        }
        
      }
    }
    cout << n << " = " << prime[maxInd] << " + " << n-prime[maxInd] << '\n';
  }

  return 0;
}