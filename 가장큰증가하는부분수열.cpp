#include <stdio.h>
 
int main(void){
    int N, max=0;
    int dp[1010], A[1010];
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        scanf("%d", &A[i]);
 
    for (int i = 1; i <= N; i++){
        int maxdp = 0;
        for (int j = 0; j < i; j++){
            if (A[i]>A[j]){
                if (maxdp < dp[j])
                    maxdp = dp[j];
            }
        }
        dp[i] = maxdp + A[i];
        if (max < dp[i])
            max = dp[i];
    }
    printf("%d\n", max);
 
}