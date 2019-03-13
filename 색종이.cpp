#include <stdio.h>
int result;
int check[100][100];
void solve(int garo, int sero){
	int iend, jend;
	if( garo >= 100 || sero >= 100 )	return;
	if( garo <= 90 )	iend = garo+ 10;
	else iend = 100;
	if( sero<= 90 )	jend = sero+10;
	else jend = 100;
	for( int i=garo; i< iend; i++ ){
		for( int j=sero; j< jend; j++ ){
			check[i][j] = 1;
			//printf("%d %d\n", i, j);
		}
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=0; i< num; i++){
		int garo, sero;
		scanf("%d %d", &garo, &sero);
		solve(garo, sero);
	}
	for( int i= 0; i< 100; i++ ){
		for( int j=0; j< 100; j++ ){
			if( check[i][j] ==1 ){
				result++;
			}
		}
	}
	printf("%d", result);
	return 0;
}
