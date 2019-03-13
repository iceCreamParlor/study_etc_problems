#include <cstdio>
#include <queue>
#include <string>
#include <iostream>

using namespace std;
struct Member{
    int id;
    int age;
    string name;
    Member(int id, int age, string name){
        this->id = id;
        this->age = age;
        this->name = name;
    }
};
struct cmp{
    bool operator()(Member a, Member b){
        if(a.age == b.age){
           return a.id > b.id;
        }else{
            return a.age > b.age;
        }
    }
};
int main(){
    freopen("input.txt", "r", stdin);
    int num;    scanf("%d", &num);
    int count = 1;
    priority_queue<Member, vector<Member>, cmp> pq;
    while(num--){
        int id;
        int age;
        string name;
        id = count++;
        scanf("%d", &age);
        cin >> name;
        Member member = Member(id, age, name);
        pq.push(member);
    }
    while(!pq.empty()){
        Member member = pq.top();
        pq.pop();
        cout << member.age << " " << member.name << endl;
    }
    return 0;
}