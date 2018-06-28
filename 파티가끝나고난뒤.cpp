#include <cstdio>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n, m;   scanf("%d %d", &n, &m);
    int cmp = n*m;
    for(int i=0 ; i< 5; i++){
        int news;   scanf("%d", &news);
        printf("%d ", news-cmp);
    }

    return 0;
}