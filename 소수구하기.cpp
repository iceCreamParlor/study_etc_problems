#include <cstdio>
int main(){
	int start, last, a[100001]= {0, 1};
	scanf("%d %d", &start, &last);
	for(int i=2; i<= last; i++)
		for(int j=2; i*j <= last; j++){
			a[i*j]= 1;
	}
	for(int i= start; i<= last; i++)
		if(!a[i])	printf("%d\n", i);	
}