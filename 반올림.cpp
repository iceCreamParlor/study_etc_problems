#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
int digit;

int back(double temp, int digit){
	temp *= 10;
	while(digit>0){
		temp*= 10;
		digit--;
	}
	return (int)temp;
}
int main()
{
	freopen("input.txt", "r", stdin);
	int num, save; scanf("%d", &num);
	save = num;
	if(num==0)	cout <<0;
	else if(num<= 10)	cout<<num;
	else{
		while(num % 10 == 0){
			num/= 10;
			digit++;
		}
		double temp = (double)num/ 10.0;
		if(temp<1){
			cout << save;
		}
		else{
			//cout << digit << " " << temp << endl;
			temp = round(temp);
			temp = back(temp, digit);
			cout << temp ;
		}
	}
	return 0;
}
