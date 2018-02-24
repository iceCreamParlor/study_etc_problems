// ¤µ¤² ¿Ö¾ÈµÅ

#include <stdio.h>
#include <algorithm>
#include <queue>
#define MAX 1010

using namespace std;
struct node
{
	int row, col, depth;
};
queue<node> q;
int tomato[MAX][MAX], check[MAX][MAX];
int infected, maxim;

void print(int row, int col){
	printf("\n");
	for(int i=0; i< row; i++){
		for(int j=0; j< col; j++){
			printf("%d ", tomato[i][j]);
		}printf("\n");
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	int row, col;
	scanf("%d %d", &col, &row);
	for(int i=0; i< row; i++){
		for(int j=0; j< col; j++){
			scanf("%d", &tomato[i][j] );
		}
	}
	for(int i=0; i< row; i++){
		for(int j=0; j< col; j++){
			if( tomato[i][j]== 1 ){
				node temp;
				temp.row= i; temp.col=j; temp.depth=0;
				q.push(temp);
				infected++;
			}
		}
	}
	while(q.size()){
		//print(row, col);
		node now= q.front(); q.pop();
		check[now.row][now.col]= 1;
		//printf("%d %d %d\n", now.row, now.col, now.depth);
		if( ((now.row)-1 >=0)&& tomato[(now.row)-1][now.col]==0 && !check[now.row-1][now.col] ){
			tomato[(now.row)-1][now.col]= 1;
			node temp;	temp.row= (now.row)-1; temp.col= now.col; temp.depth= now.depth+1;
			q.push( temp );
			infected++; maxim= temp.depth;
			check[now.row-1][now.col] =1;
		} // up
		if( ((now.col)-1 >=0)&& tomato[now.row][(now.col)-1]==0 && !check[now.row][now.col-1] ){
			tomato[row][(now.col)-1]= 1;
			node temp;	temp.row= now.row; temp.col= (now.col)-1; temp.depth= now.depth+1;
			q.push( temp );
			infected++; maxim= temp.depth;
			check[now.row][now.col-1] =1;
		}  // left
		if( ((now.col)+1 < col)&& tomato[now.row][(now.col)+1]==0 && !check[now.row][now.col+1] ){
			tomato[now.row][now.col+1]= 1;
			node temp;	temp.row= now.row; temp.col= (now.col)+1; temp.depth= now.depth+1;
			q.push( temp );	
			infected++; maxim= temp.depth;
			check[now.row][now.col+1] =1;
		}	//right
		if( ((now.row)+1 < row)&& tomato[(now.row)+1][col]==0 && !check[now.row+1][now.col] ){
			tomato[(now.row)+1][now.col]= 1;
			node temp;	temp.row= (now.row)+1; temp.col= now.col; temp.depth= now.depth+1;
			q.push( temp );	
			infected++; maxim= temp.depth;
			check[now.row+1][now.col] =1;
		}	// left
	}
	//printf("%d", infected);
	if( infected== row*col  ){
		printf("%d\n", maxim);
	}
	else printf("-1\n");
	return 0;
}
