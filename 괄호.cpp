#include<iostream>
#include<stack>
#include<string>
 
using namespace std;
 
bool Check(string str){
    int len = (int)str.length(); //���ڿ� ����
    stack<char> st;              //char Ÿ���� �޴� stack ����
 
    for(int i=0; i<len ; i++) { //���ڿ� ���̸�ŭ �ݺ���
        char c = str[i];        //���� �ϳ��� ����
 
        if(c == '('){
            st.push(str[i]);    //���� ��ȣ�� push
        }else{
            if(!st.empty()){    //�ݴ� ��ȣ�� stack �� ����ִ��� Ȯ����
                st.pop();       //������ ������� ������ pop
            }else{
                return false;   //��������� false.
            }
        }
    }
 
    return st.empty();          //�ݺ����� ������ ���ÿ� ��ȣ�� ���������� false
}
 
int main(void){
 
    int n;
    cin >> n;
 
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
 
        if(Check(str)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
