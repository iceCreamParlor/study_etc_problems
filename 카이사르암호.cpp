#include <cstdio>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    char c;
    while(scanf("%c", &c)!=EOF){
        if(c>=65 && c<=98){
            if(c=='A'){
                printf("X");
            }else if(c=='B'){
                printf("Y");
            }else if(c=='C'){
                printf("Z");
            }
            else{
                printf("%c", c-3);
            }
            
        }
    }
    printf("\n");

    return 0;
}