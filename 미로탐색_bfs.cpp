#define MAX 101
#include <cstdio>
#include <utility>
#include <queue>

using namespace std;
int map[MAX][MAX], visited[MAX][MAX];
int sero[4] = {-1, 1, 0, 0}; // 상, 하, 좌, 우
int garo[4] = {0, 0, -1, 1};
void bfs(int r, int c, int row, int col, int length);
bool promising(int r, int c, int row, int col);
int main(){
    int row, col;   scanf("%d %d", &row, &col);
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%1d", &map[i][j]);
        }
    }
    bfs(0,0, row, col, 1);

    printf("%d\n", visited[row-1][col-1]);
    return 0;
}
void bfs(int r, int c, int row, int col, int length){
    queue<pair<int, int > > q;
    q.push(make_pair(r, c));
    visited[r][c] = 1;
    while(!q.empty()){
        pair<int, int> current_pos = q.front();
        q.pop();
        for(int i=0; i< 4; i++){
            int new_r = current_pos.first + sero[i], new_c = current_pos.second + garo[i];
            
            if(promising(new_r, new_c, row, col)){ // 제한된 구역 내에 존재하는 경우
                if(map[new_r][new_c] && !visited[new_r][new_c]){ // 경로가 존재하고, 방문한 적이 없는 경로
                    q.push(make_pair(new_r, new_c));
                    visited[new_r][new_c] = visited[current_pos.first][current_pos.second] + 1;
                }
            }
        }
    }
}
bool promising(int r, int c, int row, int col){
    if(r>=0 && r< row && c>= 0 && c < col)
        return 1;
    return 0;
}