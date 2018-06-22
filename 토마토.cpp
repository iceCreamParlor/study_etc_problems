#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int map[1001][1001];
int check[1001][1001];
int m,n;
int dx[5] = {1,-1,0,0};
int dy[5] = {0,0,1,-1};
int main()
{
    queue<pair<int,int>> q;
    scanf("%d %d",&m,&n);
 
    for(int i=0 ; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&map[i][j]);
            check[i][j] = -1;
            if(map[i][j] == 1){
                check[i][j] = 0;
                q.push(make_pair(i,j));
            }
        }
    }
 
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++)
        {
            int nx = x +dx[i];
            int ny = y + dy[i];
            if(map[nx][ny] == 0 && check[nx][ny] == -1 )
            {
                if(nx >= 0 && ny >= 0 && nx < n && ny < m)
                {
                    check[nx][ny] = check[x][y]+1;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }
    int maxVal = 0;
    for(int i= 0 ;i<n; i++){
        for(int j=0; j<m; j++){
            if(maxVal < check[i][j])
                maxVal = check[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(map[i][j] == 0 && check[i][j] == -1)
                maxVal = -1;
        }
    }
    cout<<maxVal<<endl;
}
