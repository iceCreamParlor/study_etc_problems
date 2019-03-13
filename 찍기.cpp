#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
char a[101], b[101], c[101], ans[101];

int main()
{
	freopen("input.txt", "r", stdin);
	for(int i=1; i<= 100; i++){
		if(i%3 ==1){
			a[i] = 'A';
		}
		else if(i%3 ==2){
			a[i] = 'B';
		}
		else if(i%3 ==0){
			a[i] = 'C';
		}
	}
	for(int i=1; i<= 97; i+=4){
		b[i] = 'B';
		b[i+1] = 'A';
		b[i+2] = 'B';
		b[i+3] = 'C';
	}
	for(int i=1; i<= 100; i+=6){
		if(i>100)	break;
		c[i] = 'C';
		c[i+1] = 'C';
		c[i+2] = 'A';
		c[i+3] = 'A';
		c[i+4] = 'B';
		c[i+5] = 'B';
	}
	int num;	scanf("%d", &num);
	int aa=0, bb=0, cc=0;
	string str; cin >> str;
	for(int i=1; i<=num; i++){
		char temp = str[i-1];
		if(temp== a[i])	aa++;
		if(temp== b[i])	bb++;
		if(temp== c[i])	cc++;
	}
	
	int maxim = max(max(bb, aa),cc);
	printf("%d\n", maxim);
	if(maxim== aa)	printf("Adrian\n");
	if(maxim== bb)	printf("Bruno\n");
	if(maxim== cc)	printf("Goran\n");
	return 0;
}
