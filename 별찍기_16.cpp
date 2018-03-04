#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int t = 1; t <= i * 2 - 1; t++)
        {
            if (t % 2 == 0)//t°¡ Â¦¼öÀÏ ¶§
            {
                cout << " ";
            }
            else if (t % 2 == 1)//t°¡ È¦¼öÀÏ ¶§
            {
                cout << "*";
            }
        }
        cout << '\n';
    }
}