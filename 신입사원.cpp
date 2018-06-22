#include <cstdio>
#include <algorithm>
using namespace std;

#define MAX_N 100000
struct Score{
	int pp; // paper score
	int iv; // interview score
};

int T;
int min(int a, int b) { return a<=b?a:b; }
int hire_cnt(int n, Score* s);
Score* score = new Score[MAX_N];
bool cmp_socre_by_pp(const Score& a, const Score& b){
	return a.pp < b.pp;	
}
int main(){
	scanf("%d", &T);
	
	for(int i=0; i<T; i++)
	{
		int N;
		scanf("%d", &N);

		for(int j=0; j<N; j++)
			scanf("%d %d", &score[j].pp, &score[j].iv);

		printf("%d\n", hire_cnt(N, score));
	}
	return 0;
}

int hire_cnt(int n, Score* sc)
{
	sort(sc, sc+n, cmp_socre_by_pp);

	int cnt = 1; // pp 점수가 1등인 지원자를 카운트
	int min_iv = sc[0].iv;
	for(int i=1; i<n; i++)
	{
		if(sc[i].iv < min_iv){
			cnt++;
			min_iv = sc[i].iv;
		}
	}
	return cnt;
}