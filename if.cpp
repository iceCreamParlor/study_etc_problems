#include <iostream>
using namespace std;
int main() {
    int x = -2147483648;
    if (x != 0 && x == -x) {
        cout << "true" << '\n';
    } else {
        cout << "false" << '\n';
    }
    return 0;
}
