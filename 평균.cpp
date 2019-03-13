#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
vector<double> original;
int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	for(int i=0; i<3; i++){
		double temp; scanf("%lf", &temp);
		original.push_back(temp);
	}
	sort(original.begin(), original.end());
	double maxim= *(original.end()-1);
	double sum=0;
	for(auto itr= original.begin(); itr!= original.end(); itr++){
		*itr= (*itr)/ maxim * 100.0;
		sum+= *itr;
	}
	printf("%.2lf", sum/ (double)(original.end()- original.begin()));
	return 0;
}
