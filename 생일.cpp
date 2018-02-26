#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
struct student
{
	string name; int day, month, year;
	student( string n, int d, int m, int y ){
		name = n; day = d; month=m; year=y;
	}
};
vector<student> myvec;

bool cmp(student s1, student s2){
	if( s1.year == s2.year ){
		if(s1.month == s2.month){
			if(s1.day == s2.day){
				return false;
			}
			else return s1.day> s2.day;
		}
		else return s1.month> s2.month;
	}
	else return s1.year> s2.year;
}


int main()
{
	freopen("input.txt", "r", stdin);
	int num; scanf("%d", &num);
	
	for(int i=0; i< num; i++){
		string s; int d, m, y;
		cin >> s >> d >> m >> y;
		student temp = student(s, d, m, y);
		myvec.push_back(temp);
	}
	sort(myvec.begin() , myvec.end(), cmp);
	cout << myvec[0].name << endl;
	cout <<  myvec[ myvec.size()-1 ].name<< endl;
	return 0;
}
