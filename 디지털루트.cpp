#include <cstdio>

using namespace std;

int main(){
    freopen("input.txt", "r",stdin);
    int num, new_num;
    while(1){
        scanf("%d", &num);
        if(num==0)  break;
        new_num = 0;
        while(1){
            while(num != 0){
                new_num += num%10;
                num /= 10;
            }
            if(new_num < 10)    break;
            num=new_num;
            new_num=0;
        }
        printf("%d\n", new_num);
    }
    return 0;
}