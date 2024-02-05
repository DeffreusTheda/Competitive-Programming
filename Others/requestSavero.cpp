#include <iostream>
using namespace std;

int input;

int main() {
    ios_base::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    
    cin >> input;
    if (input == 0) {
        cout << "0";
        return 0;
    }
    int output = 1;
    for (int i = input; i > 0; i-=2) {
        output *= i;
    }
    cout << output;

    return 0;
}