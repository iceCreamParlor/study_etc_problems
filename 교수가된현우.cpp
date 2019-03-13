#include <cstdio>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int num;    scanf("%d", &num);
    for(int i=0; i<num ; i++){
        int result= 0;
        int N;  scanf("%d", &N);
        int divide = 5;
        while(divide <= N){
            result+= N/divide;
            divide*=5;
        }
        printf("%d\n", result);
    }
    return 0;
}