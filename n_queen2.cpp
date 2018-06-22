#include <cstdio>

int main(){
    freopen("input.txt", "r", stdin);
    bool odd = false;
    int num;
    scanf("%d", &num);
    if(num%2)
        odd = true;
    if((!odd && num%6 != 2) || (odd && (num-1)%6!=2)){
        if(odd) num--;
        for(int i=1; i<=num/2 ; i++)
            printf("%d\n", 2*i);
        for(int i=1; i<=num/2 ; i++)
            printf("%d\n", 2*i-1);
        if(odd)
            printf("%d\n", num+1);
    }else if((!odd&&num/6!=0) || (odd && (num-1)/6!=2)){
        if(odd) num--;
        for(int i=1; i<=num/2 ; i++)
            printf("%d\n", 1+(2*i + num/2 -3)%num);
        for(int i=num/2 ; i>0; i--)
            printf("%d\n", num-(2*i+num/2-3)%num);
        if(odd)
            printf("%d\n", num+1);
    }
    return 0;
}