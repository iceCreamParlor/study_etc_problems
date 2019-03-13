#include <cstdio>
#include <algorithm>
#include <vector>
#define MAX 100001

using namespace std;
struct Point{
  int x, y;
};
bool cmp(const Point &x, const Point &y){
  if(x.x < y.x) 
    return true;
  else if(x.x == y.x){
    if(x.y < y.y)
      return true;
    else
      return false;
  }
  return false;
}

int main(){ 
  freopen("input.txt", "r", stdin);
  vector<Point> v;
  int num;  scanf("%d", &num);

  while(num--){
    int x, y; scanf("%d %d", &x, &y);
    Point p;
    p.x = x; p.y = y;
    v.push_back(p);
  }
  sort(v.begin(), v.end(), cmp);
  for(int i = 0 ; i < v.size() ; i++){
    printf("%d %d\n", v[i].x, v[i].y);
  }
  printf("\n");
  return 0;
}