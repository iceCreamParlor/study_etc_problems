#define MAX 101
#include <cstdio>

using namespace std;
int map[MAX][MAX], visited[MAX][MAX];
int mini = 111111111;
int sero[4] = {-1, 1, 0, 0}; // 상, 하, 좌, 우
int garo[4] = {0, 0, -1, 1};
void dfs(int r, int c, int row, int col, int length);
bool promising(int r, int c, int row, int col);

int main(){
    freopen("input.txt", "r", stdin);
    int row, col;   scanf("%d %d", &row, &col);
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%1d", &map[i][j]);
        }
    }
    dfs(0, 0, row, col, 1);
    printf("%d\n", mini);
    return 0;
}
void dfs(int r, int c, int row, int col, int length){
    if(r >= row || c >= col || r<0 || c<0 )    return;
    if(length >= mini)  return;
    if(r == row-1 && c == col-1){
        if(mini > length){
            mini = length;
        }
    }
    for(int i=0; i<4 ; i++){
        int new_r = r + sero[i], new_c = c+garo[i];
        
        if(promising(new_r, new_c, row, col)){
            if(map[new_r][new_c] && !visited[new_r][new_c]){
                visited[new_r][new_c] = 1;
                dfs(new_r, new_c, row, col, length+1);
                visited[new_r][new_c] = 0;
            }
        }
    }
}

bool promising(int r, int c, int row, int col){
    if(r>=0 && r< row && c>= 0 && c < col)
        return 1;
    return 0;
}