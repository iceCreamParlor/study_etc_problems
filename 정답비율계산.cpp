#include <stdio.h>
#include <string>
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
	freopen("input.txt", "r", stdin);
	int num;	scanf("%d", &num);
	int total=0, correct=0;
	for(int i=0; i< num; i++){	
		int trash;	scanf("%d", &trash);
		char id[21];  scanf("%s", id);
		if( strcmp(id, "megalusion") != 0 ){
			total++;
		}
		int ans;	scanf("%d", &ans);
		switch(ans){
			case 4: {
				if(strcmp(id, "megalusion") != 0){
					correct++; break;
				}
			}
			default: break;
		}
		scanf("%d", &trash);
		scanf("%d", &trash);
		scanf("%d", &trash);
		scanf("%d", &trash);
		
	}
	printf("%lf", (double)correct/(double)total * 100);
	return 0;
}
