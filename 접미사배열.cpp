#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
 
string s;
 
bool comp(int x, int y) {
    return strcmp(s.c_str() + x, s.c_str() + y) < 0;
}
 
int main()
{
    cin >> s;
    
    vector <int> t;
    for (int i = 0; i < s.size(); i++) {
        t.push_back(i);
    }
 
    int a; int b;
    sort(t.begin(), t.end(), comp);
    
    for (int i = 0; i < t.size(); i++) {
        cout << s.substr(t[i]) << "\n";
    }
 
    return 0;
}
