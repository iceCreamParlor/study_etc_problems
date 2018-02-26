#include <iostream>
#include <string>
 
using namespace std;
 
string map[21];
int check[26];
 
int n, m;
int maxValue = 0;
 
void dfs(int x, int y, int cnt)
{    
    if (check[map[y][x] - 'A'] == 0)
    {
        check[map[y][x] - 'A'] = 1;
        
        cnt > maxValue ? maxValue = cnt : 0;
 
        if (x + 1 < m) dfs(x + 1, y, cnt + 1);
 
        if (y + 1 < n ) dfs(x, y + 1, cnt + 1);
 
        if (x - 1 >= 0 ) dfs(x - 1, y, cnt + 1);
 
        if (y - 1 >= 0 ) dfs(x, y - 1, cnt + 1);
 
        check[map[y][x] - 'A'] = 0; //백트래킹!!
    }
}
 
int main()
{
	freopen("input.txt", "r" ,stdin);
    int cnt = 1;
 
    cin >> n >> m;
 
    while (getchar() != '\n') {}
 
    for (int i = 0; i < n; i++)
        getline(cin, map[i]);
 
    dfs(0, 0, cnt);
 
    cout << maxValue;
}
