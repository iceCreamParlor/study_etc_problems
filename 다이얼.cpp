#include<iostream>
#include<string>
 
using namespace std;
 
//���ڰ� ������ �׿� ���� ���ڸ� ��ȯ�ϴ� �Լ�
int check(char c){
    int num;
    
    switch(c){
        case 'A':
        case 'B':
        case 'C':
            num = 2;
            break;
        case 'D':
        case 'E':
        case 'F':
            num = 3;
            break;
        case 'G':
        case 'H':
        case 'I':
            num = 4;
            break;
            
        case 'J':
        case 'K':
        case 'L':
            num = 5;
            break;
            
        case 'M':
        case 'N':
        case 'O':
            num = 6;
            break;
            
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            num = 7;
            break;
            
        case 'T':
        case 'U':
        case 'V':
            num = 8;
            break;
            
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            num = 9;
            break;
            
        default:
            break;
            
    }
    return num;
}
 
 
int main(void){
    
    //�Է�
    string str;
    cin >> str;
    
    int sum =0;
    for(int i=0; i<str.length(); i++) {
        if (str[i] == 0) {  //0�϶�
            sum += 10;
        } else if (str[i] == 1) {   //1�϶�
            sum += 1;
        } else {
            sum += check(str[i]);    //A~Z�϶� (2~9)
        }
    }
 
    sum += (int)str.length(); //���ƿ��� �ð����
 
    //���
    cout << sum;
    
    return 0;
    
}