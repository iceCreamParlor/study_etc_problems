#define MAX 10010
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <functional>

using namespace std;

int Answer;
int dp[MAX];
bool check[MAX];
bool isPelindrom(int num);
int main(int argc, char** argv)
{
    freopen("input.txt", "r", stdin);
    setbuf(stdout, NULL);
	int T, test_case;

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
        int answer[3]={0,0,0};
        int mini = 111111111;
		Answer = 0;
		int num;    scanf("%d", &num);
       
        for(int i=1 ; i<= num ; i++){
            dp[i] = 11111111;
            mini = 111111111;
            check[i] = false;
            if(isPelindrom(i)){
                dp[i] = 1;
                check[i] = true;
            }
        }
        
        for(int i=1; i <= num ; i++){
            for(int j=i+1 ; j<= num ; j++){ 
                if(check[i] && check[j]){
                    if(!check[i+j] && j <= num){
                        if(i+j == num && mini > 2){
                            dp[i+j] = 2;
                            answer[0]=i;
                            answer[1]=j;
                            mini = 2;
                        }
                    }
                    for(int k= j+1; k<= num ; k++){
                        if(i+j+k==num && mini > 3  && check[k]){
                            dp[i+j+k] = 3;
                            answer[0]=i;
                            answer[1]=j;
                            answer[2]=k;
                            mini = 3;
                        }
                    }
                }if(check[i] || check[j]){
                    for(int k = j+1 ;  k <= num && check[k] ; k++){
                        if( j < num && check[j] && check[i]){
                            
                            if(i+j ==num &&  mini > 2){
                                dp[i+j] = 2;
                                answer[0]=i;
                                answer[1]=j;
                                mini = 2;
                            }
                        }
                        if(  k <= num && check[j] && check[k]){
                            
                            if(j+k == num && mini > 2){
                                dp[j+k] = 2;
                                answer[0]=j;
                                answer[1]=k;
                                mini = 2;
                            }
                        }
                        if( k<= num && check[i] && check[k]){
                            
                            if(i+k==num && mini > 2){
                                dp[i+k] = 2;
                                answer[0]=i;
                                answer[1]=k;
                                mini = 2;
                            }
                        }
                    }
                }
            }
        }
        cout << "Case #" << test_case+1 << endl;
        if(num < 10){
            cout << 1 << " " << num<< endl;
        }
        else if(dp[num]==11111111){
            cout << 0 << endl;
            
        }
            
        else{
            if(isPelindrom(num)){
                cout << 1 << " " << num << endl;
            }else{
                cout << dp[num] << " " ;
                if(mini==111111111){
                    cout << num << " " << endl;
                }
                else{
                    sort(answer, answer+mini, greater<int>());
                    for(int i=0; i< mini ; i++){
                        cout << answer[i] << " ";
                    }
                    cout << endl;
                }
            }
        }
	}
	return 0;//Your program should return 0 on normal termination.
}
bool isPelindrom(int num){
    int digit= 0, temp = num;
    bool result = true;;
    vector<int> v;
    while(temp!=0){
        digit++;
        v.push_back(temp%10);
        temp/=10;
    }
    for(int i=0; i<= digit/2 ; i++){
        if(v[i] != v[digit-i-1]){
            result = false;
        }
    }
    return result;
}