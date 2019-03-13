#include <stdio.h>
#define min(a,b) (a<b?a:b)
 
long long int i;
int n, r;
int five = 0, two = 0;
 
int fiveCount(int num) {
    int count = 0;
    
    for (i = 5; num / i >= 1; i *= 5)
        count += num / i;
    
    return count;
}
 
int twoCount(int num) {
    int count = 0;
    
    for (i = 2; num / i >= 1; i *= 2)
        count += num / i;
    
    return count;
}
 
int main() {
    
    scanf("%d %d", &n, &r);
 
 
    five += fiveCount(n);
    if (r != 0)five -= fiveCount(r);
    if (n != r)five -= fiveCount(n - r);
 
    two += twoCount(n);
    if (r != 0)two -= twoCount(r);
    if (n != r)two -= twoCount(n - r);
 
    printf("%d\n", min(two, five));
 
    return 0;
}